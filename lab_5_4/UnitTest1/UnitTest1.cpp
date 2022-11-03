#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S0(0);
			Assert::AreEqual(t, 0.);
		}
	};
}
