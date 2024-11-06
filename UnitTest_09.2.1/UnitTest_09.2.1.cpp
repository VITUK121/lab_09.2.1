#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_09.2.1/macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0921
{
	TEST_CLASS(UnitTest0921)
	{
	public:
		
		TEST_METHOD(pow_2)
		{
			Assert::AreEqual(POW_2(5), 25);
		}
		TEST_METHOD(pow_3)
		{
			Assert::AreEqual(POW_3(3), 27);

		}
		TEST_METHOD(abs)
		{
			Assert::AreEqual(ABS(-3), 3);
		}

	};
}
