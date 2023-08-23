#pragma once
#include <iostream>
#include <string>
#include <fstream>

void OpenWriteAndCloseFile(std::ofstream& file, const std::string& text, const std::string& fileName)
{
	file.open(fileName);

	if (file.is_open())
	{
		file << text << std::endl;
	}
	file.close();
}

std::string ReadFile(std::fstream& file, std::string& line, const std::string& fileName)
{
	file.open(fileName);

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
		}
	}

	file.close();
	return line;
}

std::string ReplaceWord(std::string& text, const std::string& whatToReplace, const std::string& replacementText)
{
	size_t position = 0;

	while (true)
	{
		position = text.find(whatToReplace, position);

		if (std::string::npos == position)
		{
			break;
		}

		text.replace(position, whatToReplace.length(), replacementText);
		position += replacementText.length();
	}

	return text;
}