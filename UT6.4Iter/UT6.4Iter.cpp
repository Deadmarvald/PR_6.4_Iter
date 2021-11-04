#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4Iter/Lab_06_4_Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT64Iter
{
	TEST_CLASS(UT64Iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 2;
			int p[n] = { 1,2 };
			int A = 2;
			int B = 3;
			t = Kil(p, n, A, B);
			Assert::AreEqual(t, 1);
		}
	};
}
