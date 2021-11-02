#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3/Lab-6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -16, -14, -3, 0, 2, 6, 10, 23 };
			int tmp = Max(A, 8);
			Assert::AreEqual(23, tmp);

		}
	};
}
