#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.6(2)/Time.h"
#include "../lab1.6(2)/Time.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod2)
		{
			Time t1;
			t1.Init1(1, 2, 3);
			bool t = t1.Equal();
			Assert::AreEqual(t, true);
		}
	};
}
