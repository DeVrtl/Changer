#include <string>
#include "pch.h"
#include "../Changer/Changer.h"

TEST(TestReplceWord , OLOLOTest)
{
	std::string text = ReplaceWord("OLOLO", "LO", "2");

	ASSERT_EQ("O22", text);
}

TEST(TestReplceWord2, FunbarFunTest)
{
	std::string text = ReplaceWord("funbar fun", "fun", "foo");

	ASSERT_EQ("foobar foo", text);
}