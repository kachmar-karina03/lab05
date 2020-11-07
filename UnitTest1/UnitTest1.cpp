#include "pch.h"
//#include "../idk/idk.cpp"
#include "CppUnitTest.h"
#include "../idk/idk.cpp"
//#include "../idk/idk.cpp"
//#include <idk>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(a, b,c);
			Assert::AreEqual(t, 1);
		}
	};
}
