#include <string>
#include "pch.h"
#include "../Changer/Changer.h"

TEST(TESTReplceWordFunction, SimpleWord)
{
	std::string replaceWordText =  "OLOLO";

	const std::string text = ReplaceWord(replaceWordText, "LO", "2");

	ASSERT_EQ("O22", text);
}

TEST(TESTReplceWordFunction, HyphenatedLetter)
{
	std::string replaceWordText = "OLOLOL";

	const std::string text = ReplaceWord(replaceWordText, "LO", "2");

	ASSERT_EQ("O22L", text);
}

TEST(TESTReplceWordFunction, ZeroLengthStringToReplace)
{
	std::string replaceWordText = "";

	const std::string text = ReplaceWord(replaceWordText, "LO", "2");

	ASSERT_EQ("", text);
}

TEST(TESTReplceWordFunction, ZeroLengthStringReplacementText)
{
	std::string replaceWordText = "OLOLO";

	const std::string text = ReplaceWord(replaceWordText, "LO", "");

	ASSERT_EQ("O", text);
}

TEST(TESTReplceWordFunction, OneSymbolString)
{
	std::string replaceWordText = "OLOLO";

	const std::string text = ReplaceWord(replaceWordText, "L", "22");

	ASSERT_EQ("O22O22O", text);
}

TEST(TESTReplceWordFunction, SpaceBetweenSentence)
{
	std::string replaceWordText = "funbar fun";

	const std::string text = ReplaceWord(replaceWordText, "fun", "foo");

	ASSERT_EQ("foobar foo", text);
}

TEST(TESTReplceWordFunction, LongSentence)
{
	std::string replaceWordText = "The quick brown fox jumps over the lazy dog";

	const std::string text = ReplaceWord(replaceWordText, "quick", "slow");

	ASSERT_EQ("The slow brown fox jumps over the lazy dog", text);
}

TEST(TESTReplceWordFunction, NothingStringWhatToReplace)
{
	std::string replaceWordText = "OLOLO";

	const std::string text = ReplaceWord(replaceWordText, " ", "2");

	ASSERT_EQ("OLOLO", text);
}