#include "pch.h"
#include "CppUnitTest.h"
#include "Timer.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TDDNonGoogleUnitTestTimerProject
{
	TEST_CLASS(TDDNonGoogleUnitTestTimerProject)
	{
	public:
		TEST_METHOD(SaveAndExecuteFunction)
		{
			auto LambdaFunction = []() {std::cout << "function executed!" << std::endl; };
			
			Timer timer{LambdaFunction, 1};
			timer.ExecuteCycles();
			Assert::AreNotEqual(0, timer.GetExecutedCycles());
			
		}
		TEST_METHOD(CallFunctionXTimes)
		{
			const int repetitionCount{ 123 };
			int iterationsDone{ 0 };
			auto lambdaFunction = [&iterationsDone]() {iterationsDone++; }; 
			Timer timer{lambdaFunction, repetitionCount};

			timer.ExecuteCycles();
			//timer.run(lambdaFunction, repetitionCount); //linking error is normal in TDD?

			Assert::AreEqual(iterationsDone, repetitionCount);
			Assert::AreEqual(timer.GetExecutedCycles(), repetitionCount); //essentially the same, but might aswell.
		}

		//TEST_METHOD(StopTimer)
		//{

		//}
		//TEST_METHOD(ArrayFilled)
		//{

		//}
		//TEST_METHOD(ConversionToMiliseconds)
		//{

		//}
		//TEST_METHOD(ResultIsValid)
		//{

		//}


	};
}
