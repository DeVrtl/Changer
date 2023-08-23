#include <iostream>
#include <string>
#include <fstream>
#include "Changer.h"

namespace 
{

	enum Arguments
	{
		INPUT_FILE_NAME_PARAMETR = 1,
		OUTPUT_FILE_NAME_PARAMETR,
		WHAT_TO_REPLACE_PARAMETR,
		REPLACEMENT_TEXT_PARAMETR,

		COUNT
	};

}

int main(int argc, char* argv[])
{
	if (argc <= COUNT)
	{
		return EXIT_FAILURE;
	}

	std::fstream inputFile;

	std::string line = ReadFile(inputFile, line, argv[INPUT_FILE_NAME_PARAMETR]);

	std::string textInInput = line;

	const std::string whatToReplace = argv[WHAT_TO_REPLACE_PARAMETR];
	const std::string replacementText = argv[REPLACEMENT_TEXT_PARAMETR];

	textInInput = ReplaceWord(textInInput, whatToReplace, replacementText);

	std::string textInOutput = textInInput;

	std::ofstream outputFile;

	OpenWriteAndCloseFile(outputFile, textInOutput, argv[OUTPUT_FILE_NAME_PARAMETR]);

	return EXIT_SUCCESS;
}