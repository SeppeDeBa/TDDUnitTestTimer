#include "pch.h"
#include "CppUnitTest.h"
#include "Timer.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TDDNonGoogleUnitTestTimerProject
{
	TEST_CLASS(TDDNonGoogleUnitTestTimerProject)
	{
	public:
		int test{ 5 };

		TEST_METHOD(CallFunctionXTimes)
		{
			Timer timer{};
			const int repetitionCount{ 10 };
			int iterationsDone{ 0 };
			auto lambdaFunction = [&iterationsDone]() {iterationsDone++; }; 


			//timer.run(lambdaFunction, repetitionCount); //linking error is normal in TDD?

			Assert::AreEqual(iterationsDone, repetitionCount);
		}

		TEST_METHOD(StopTimer)
		{

		}
		TEST_METHOD(ArrayFilled)
		{

		}
		TEST_METHOD(ConversionToMiliseconds)
		{

		}
		TEST_METHOD(ResultIsValid)
		{

		}


	};
}
