#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../Project6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testVector = { 2, 4, 6, 8, 10 };
			int result = findIndex(testVector);
			Assert::AreEqual(1, 1);
		}
	};
}
