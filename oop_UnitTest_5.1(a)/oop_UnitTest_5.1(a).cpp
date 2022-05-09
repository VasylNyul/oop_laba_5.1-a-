#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_5.1(a)/Combination.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest51a
{
	TEST_CLASS(oopUnitTest51a)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Combination t(4, 6);
			int a;
			a = t.combination();
			Assert::AreEqual(a, 15);
		}
	};
}
