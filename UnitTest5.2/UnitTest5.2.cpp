#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab5.2\Lab5.2\Lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0, n = 0;
			int t;
			t = (x * x * (2 * n - 1)) / (2 * n + 1);
			Assert::AreEqual(t, 0);

		}
	};
}
