#include <iostream>
#include <string>
#include <fstream>
#include "Changer.h"

int main(int argc, char* argv[])
{
	std::string replacementText, whatToReplace, textInInput, textInOutput, line;
	std::ofstream outputFile;
	std::fstream inputFile;

	line = ReadFile(inputFile, line, argv[1]);

	textInInput = line;

	whatToReplace = argv[3];
	replacementText = argv[4];

	textInInput = ReplaceWord(textInInput, whatToReplace, replacementText);

	textInOutput = textInInput;

	OpenWriteAndCloseFile(outputFile, textInOutput, argv[2]);

	return EXIT_SUCCESS;
}