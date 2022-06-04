#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/6/lab_6.4/lab_6.4/lab_6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 1, 1, 1, 1 };
			Assert::AreEqual(Ordered(a, a + 5), true);
		}
	};
}
