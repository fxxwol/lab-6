#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.1rec/Lab-6.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6rec
{
	TEST_CLASS(UnitTest6rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -16, -14, -3, 0, 2, 6, 10, 23 };
			int tmp = Amount(A, 8, 0);
			Assert::AreEqual(2, tmp);
		}
	};
}
