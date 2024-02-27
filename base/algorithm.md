Main
GOAL: Need an input file, manipulate it, then output it in a new file
INPUT: Input file of text
OUTPUT: Display the input files in order and  

READ()
STEPS:
1) Open input.txt
2) Scan through the file line by line
3) Store the Data Somewhere
4) Close "input.txt"

manipulate()
1) Parsing and combining the lines
2) Repeat given strings "n" times
3) Store manipulated string 
4) Repeat for input lines 

WriteFile()
1) Check output.txt
2) Write what you did in manipulate
3) Close file 


The purpose of this lab is to familiarize you with the C++ process of parsing and file input/output through the basics of the fstream library. The getline function will be used to manipulate large pieces of data into progressively smaller chunks. Together with the stringstream function, you can swap back and forth to 'tokenize' a large line of input and control where each piece goes.

Your job is to write a program that takes an expected input file named "input.txt" of exact format:

(int),(int),(int)
(string)
(int),(int),(int)
(string)
(int),(int),(int)
(string)
(int),(int),(int)
(string)
(int),(int),(int)
(string)

Your program should then sum the ints of each line and output the immediately following line's string, that many times, seperated by commas such that:

1,2,3
ham

becomes:

ham,ham,ham,ham,ham,ham

NOTE: you may add a trailing comma to the end of the line if that is easier for you.

You might want to use a stringstream for data-handling. Recall that the getline function allows you to set a delimiter, but it only returns string values.
You may also find the atoi() and .c_str() functions useful.

Your final output format should not be the console. Instead, your program should open a second file and write your output to a file named "output.txt" which should be five lines of comma-seperated words.

Your assignment must include a makefile that follows the assignment requirements from OOP Horses. It must include a make run command.

Do not use namespace std. It will lose you points