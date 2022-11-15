#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab07_1_it/Lab07_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int array = {1,3,4,5 };
			int t;
			t = Calc(array, 10);
			Assert::AreEqual(t, 5, 9, 0, 0);
		}
	};
}
