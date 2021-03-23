#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 8.2(Iter)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[15] = "fav nd gaaaa";

			int c = Count(s, 0);

			Assert::AreEqual(c, 4);
		}
	};
}
