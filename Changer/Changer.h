#pragma once
#include <iostream>
#include <string>
#include <fstream>

void OpenWriteAndCloseFile(std::ofstream& file, std::string text, std::string fileName)
{
	file.open(fileName);

	if (file.is_open())
	{
		file << text << std::endl;
	}
	file.close();
}

std::string ReadFile(std::fstream& file, std::string line, std::string fileName)
{
	file.open(fileName);

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
		}
	}

	return line;
	file.close();
}

std::string ReplaceWord(std::string text, std::string whatToReplace, std::string replacementText)
{
	size_t position = 0;

	while ((position = text.find(whatToReplace, position)) != std::string::npos)
	{
		text.replace(position, whatToReplace.length(), replacementText);
		position += replacementText.length();
	}

	return text;
}