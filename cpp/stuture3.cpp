#include <iostream>
#include <string>
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
void option()
{
    cout << "    ````````...** list **...```````    " << endl;
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
void formation(const Task tasks[], int count)
{
    for (int i = 0; i < count; i++)
    {
        header();
        cout << left << "";
        cout << setw(10) << tasks[i].id;
        cout << setw(20) << tasks[i].title;
        cout << setw(25) << tasks[i].description;
        cout << setw(20) << tasks[i].completed;
        cout << endl;
    }
}
void createTask(Task tasks[], int &count)
{
    if (count >= MAX_TASK)
    {
        cout << "Array is full. Cannot add more Task." << endl;
        return; // exit the function early
    }

    cout
        << "Enter user information:" << endl;
    cout << "ID: ";
    cin >> tasks[count].id;

    cout << "title: ";
    cin.ignore();
    getline(cin, tasks[count].title);

    cout << "description: ";
    cin >>
        tasks[count].description;

    cout << "completed: ";
    cin >> tasks[count].completed;

    count++;
    cout << "User created successfully...!" << endl;
}

void findTaskId(Task tasks[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (tasks[i].id == id)
        {
            return;
        }
        return;
    }
}

void UpdateTask(Task tasks[], int count, int id)
{
    int index = findTaskId(tasks, count, id);
}
///////////////////////////////////////////////////////

int main()
{

    system("clear");
    Task tasks[MAX_TASK] = {};
    int choose, count = 0;
    // int tasks, i;
    do
    {
        option();
        cout << "Select your choose ======= :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            createTask(tasks, count);
            break;
        }
        case 2:
        {
            formation(tasks, count);
            break;
        }
        case 3:
        {
            int id;
            cout << "Input task id :";
            cin >> id;
        }
        }
    } while (1);

    return 0;
}