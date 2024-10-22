#pragma once
#include <functional>
//the timer is a simple project that needs to:
//- start timer
//- do stuff
//- stop timer

//and these things X amount of times.
//After this it cuts off the top and bottom 5% of the times, and gives an average.
//I will not be working on threadsafety yet, as it's not the purpose of this project.

class Timer final
{
public:
	Timer(std::function<void()> functionToExecute, int repetitions)
		: m_myFunction{ functionToExecute }
		, m_targetCycles{ repetitions }
		, m_currentCycles{ 0 }
	{};
	


	~Timer() = default;

	int GetExecutedCycles()
	{
		return m_currentCycles;
	}
	void ExecuteCycles()
	{
		for (int i{ 0 }; i < m_targetCycles; ++i)
		{
			m_myFunction();
			++m_currentCycles;
		}
	}

private:
	//function variables
	std::function<void()> m_myFunction;
	
	//cycle variables
	int m_targetCycles;
	int m_currentCycles;


	//bool IsTimerRunning();




};

