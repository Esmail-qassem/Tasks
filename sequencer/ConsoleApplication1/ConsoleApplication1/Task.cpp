#include "Task.h"

Task::Task():Task_ID(0), Priority(0)
{

}
Task::Task(int Task, int Prio): Task_ID(Task), Priority(Prio)
{

}

void Task::Main_Function(void)
{
    std::cout << "Running Task ID: " << Task_ID << ", Priority: " << Priority << "\n";

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

