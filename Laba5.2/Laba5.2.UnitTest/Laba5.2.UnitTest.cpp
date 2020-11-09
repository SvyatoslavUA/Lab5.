#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba5.2 2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba52UnitTest
{
	TEST_CLASS(Laba52UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double ecpected;
			double exp = 0;
			ecpected = A(0, 0, 0);
			Assert::AreEqual(ecpected, exp, 0.00001);

		}
	};
}
