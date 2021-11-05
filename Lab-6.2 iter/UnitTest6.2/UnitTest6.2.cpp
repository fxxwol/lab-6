#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.2 iter/Lab-6.2 iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -16, -14, -3, 0, 2, 6, 10, 23 };
			int tmp = FindEvenMin(A, 8);
			Assert::AreEqual(-16, tmp);

		}
	};
}
