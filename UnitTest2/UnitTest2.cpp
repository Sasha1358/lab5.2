#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1, 2, 1);
			Assert::AreEqual(t, -0.6);
		}
	};
}
