#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3rec/Lab-6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63recc
{
	TEST_CLASS(UnitTest63recc)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -16, -14, -3, 0, 2, 6, 10, 23 };
			int tmp = Max(A, 8, 1, A[0]);
			Assert::AreEqual(23, tmp);

		}
	};
}
