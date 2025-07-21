
#include "Task.h"

int main()
{

	/*priority_queue<data_type, container, comparator> */
    Sequencer Test;
    Test.Add(Task(1, 2));
    Test.Add(Task(2, 2));
    Test.Add(Task(6, 0));
    Test.Add(Task(10, 1));
    Test.Run();

}


