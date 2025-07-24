#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
class Task
{
private:
	int Task_ID;
	int Priority;
    std::function<void()> funcPtr;

public:
	Task();
	 Task(int Task, int Prio, std::function<void()> ptr);
    int Get_Priority(void) const
    {
        return Priority;
    }
    int Get_TaskId(void) const 
    {
        return Task_ID;
    }
	void Main_Function(void);
};

class compare {
public:
    bool operator()(Task a,Task b)
    {
        if (a.Get_Priority() > b.Get_Priority()) 
        {
            return true;
        }
        else if (a.Get_Priority() == b.Get_Priority()
            && a.Get_TaskId() > b.Get_TaskId())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
class Sequencer 
{
private:
    std::priority_queue<Task, std::vector<Task>, compare> queue;

public:
    Sequencer();
    void Add(Task A);
    void Run(void);
};