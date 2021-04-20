#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1(C)/Vector.h"
#include "../5.1(C)/Vector.cpp"
#include "../5.1(C)/Vector2D.h"
#include "../5.1(C)/Vector2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a(1, 0);
			++a;
			Assert::AreEqual(a.getX(), 2.0);
		}
	};
}
