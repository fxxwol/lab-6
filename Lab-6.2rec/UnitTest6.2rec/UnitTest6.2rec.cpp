#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.2rec/Lab-6.2rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -16, -14, -3, 0, 2, 6, 10, 23 };
			int tmp = FindEvenMin(A, 8, -16, 0);
			Assert::AreEqual(-16, tmp);
		}
	};
}
