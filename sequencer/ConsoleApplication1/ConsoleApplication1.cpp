
#include "Task.h"



    void Test1(void)
    {
        std::cout << "Running Task ID: " << 1 << ", Priority: " << 2 <<" ISR 1"<< "\n";
        
    }
    void Test2(void)
    {
        std::cout << "Running Task ID: " << 2 << ", Priority: " << 2 <<" ISR 2"<< "\n";

    }
    void Test3(void)
    {
        std::cout << "Running Task ID: " << 6 << ", Priority: " << 0 <<" ISR 3"<< "\n";

    }
int main()
{

	/*priority_queue<data_type, container, comparator> */
    Sequencer Test;
    Test.Add(Task(1, 2,Test1));
    Test.Add(Task(2, 2,Test2));
    Test.Add(Task(6, 0,Test3));
    Test.Run();

}


