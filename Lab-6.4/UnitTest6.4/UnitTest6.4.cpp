#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.4/Lab-6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 20, 1, 5, -3, 9, -6, 15, 24 };
			int S = Sum(A, 8);
			Assert::AreEqual(32, S);

		}
	};
}
