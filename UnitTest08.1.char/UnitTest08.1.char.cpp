#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../PR-08.1.char/PR-08.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081char
{
	TEST_CLASS(UnitTest081char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				char str[151] = "a**b**c**d";

				int pos = Count(str);

				Assert::AreEqual(pos, -1);
			}
		}
	};
}
