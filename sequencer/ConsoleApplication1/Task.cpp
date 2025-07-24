#include "Task.h"

Task::Task():Task_ID(0), Priority(0),funcPtr(nullptr)
{

}
Task::Task(int Task, int Prio,std::function<void()> ptr): Task_ID(Task), Priority(Prio),funcPtr(ptr)
{

}

void Task::Main_Function(void)
{
    funcPtr();

}

Sequencer::Sequencer()
{

}

void Sequencer::Add(Task A)
{
    queue.push(A);
}
void Sequencer::Run(void)
{
    while (!queue.empty())
    {
        Task Copy = queue.top();
        Copy.Main_Function();
        queue.pop();

    }

}

