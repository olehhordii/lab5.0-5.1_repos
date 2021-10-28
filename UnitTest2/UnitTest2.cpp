#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int e;
			int u = -0.0372971;
			double p =2;
			double q = 3;
			double c = (k(1 + p * p, 1 - q * q) - pow(k(1, p * q), 2)) / (1 + k(p * q, 1));
			e = c;
			Assert::AreEqual(e, u);
		}
	};
}
