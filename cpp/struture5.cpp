#include <iostream>
#include <iomanip>

using namespace std;

struct Task
{
    int id;
    string title;
    string description;
    bool completed;
};

const int MAX_TASK = 100;
void exercise()
{
    cout << "    ````````!!...** list **...!!```````    " << endl;
    cout << "1. add task ." << endl;
    cout << "2. Show task" << endl;
    cout << "3. update task" << endl;
    cout << "4. toggle task " << endl;
    cout << "5. delete task" << endl;
    cout << "6. exited " << endl;
}
void header()
{
    cout << left << "";
    cout << setw(10) << "ID";
    cout << setw(20) << "title";
    cout << setw(25) << "description";
    cout << setw(20) << "completed:";
    cout << endl;
}

int main()
{
    system("clear");
    Task tasks[MAX_TASK];
    int count = 0;
    int id, choice;

    return 0;
}