#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.1/Lab-6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -16, -14, -3, 0, 2, 6, 10, 23 };
			int S = Sum(A, 8);
			Assert::AreEqual(-30, S);

		}
	};
}
