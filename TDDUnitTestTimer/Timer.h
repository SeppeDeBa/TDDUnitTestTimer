#pragma once
#include <functional>
//the timer is a simple project that needs to:
//- start timer
//- do stuff
//- stop timer

//and these things X amount of times.
//After this it cuts off the top and bottom 5% of the times, and gives an average.


class Timer final
{
public:
	Timer(std::function<void()> functionToExecute)
		: m_myFunction(functionToExecute)
	{};
	


	~Timer() = default;

	int GetExecutedCycles()
	{
		return m_executionTimes;
	}
	
	//
	//void Start()
	//{

	//}
	//void Stop()
	//{

	//}
	void DoStuff()
	{
		m_myFunction();
		++m_executionTimes;
	}

private:
	std::function<void()> m_myFunction;
	int m_executionTimes{ 0 };


	//bool IsTimerRunning();




};

