// VisualSvnTest.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	//Checking number of parameters and opening files
	if (argc != 3) {
		std::cout << "Wrong number of input parameters" << std::endl;
		return 1;
	}
	std::ifstream inputFile;
	inputFile.open(argv[1], std::ios_base::in | std::ios::binary);
	if (!inputFile) {
		std::cout << "Invalid input file" << std::endl;
		return 1;
	}
	std::ofstream outputFile;
	outputFile.open(argv[2], std::ios_base::out | std::ios::binary);
	if (!outputFile) {
		std::cout << "Output file open failure" << std::endl;
		return 1;
	}
	//Read and write bytes
	char byte;
	inputFile.seekg(-1, std::ios::end);
	while (inputFile.get(byte)) {
		outputFile << byte;
		inputFile.seekg(-2, std::ios::cur);
	}
	inputFile.close();
	outputFile.close();
    return 0;
}