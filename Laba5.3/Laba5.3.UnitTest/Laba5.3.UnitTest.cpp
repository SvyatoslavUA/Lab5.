#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba53UnitTest
{
	TEST_CLASS(Laba53UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double actual;
			double exp = 1;
			actual = p(0);
			Assert::AreEqual(actual, exp);
		}
	};
}
