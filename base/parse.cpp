#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

int main() {
	std::string line;
	std::ifstream myfile("input.txt");
	std::ofstream outfile("output.txt");
	int num_lines = 0;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			num_lines++;
		}
		myfile.close();
	}

	else std::cout << "Unable to open file for counting lines";
	int **numbers =new int*[num_lines/2];
	for (int i = 0; i < num_lines / 2; ++i)
	{
		numbers[i] = new int[3];
	}
	std::string *str_arr = new std::string[num_lines/2];
	std::ifstream infile("input.txt");
	int counter = 0;
	if (infile.is_open())
	{

		while (getline(infile, line))
		{
			std::stringstream ss(line);
			std::vector<std::string> tokens;
			std::string temp_str;

			while (getline(ss, temp_str, ','))
			{
				tokens.push_back(temp_str);
			}
			for (int i = 0; i < tokens.size(); i++) {
				std::string a = tokens[i];
				std::stringstream geek(a);
				geek >> numbers[counter][i];
				std::cout << numbers[counter][i] << std::endl;
			}

			getline(infile, line);
			str_arr[counter] = line;
			std::cout << str_arr[counter] << std::endl;
			counter++;
		}
		infile.close();
	}
	for (int i = 0; i < counter; ++i)
	{
		numbers[i][0] += (numbers[i][1] + numbers[i][2]);
	}
	if (outfile.is_open())
	{
		for (int i = 0; i < counter; ++i)
		{
			for (int j = 0; j < numbers[i][0] - 1; ++j)
				outfile << str_arr[i] << ",";
			outfile << str_arr[i]<<std::endl;
		}

	}


	else std::cout << "Unable to open file for reading ";
	return 0;
}
