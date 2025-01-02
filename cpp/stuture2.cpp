#include <stdio.h>
#include <string>
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
void option()
{
    cout << "    ````````...** list **...```````    ";
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
void formation(const Task task[], int count)
{
    for (int i = 0; i < count; i++)
    {
        header();
        cout << left << "";
        cout << setw(10) << task[i].id;
        cout << setw(20) << task[i].title;
        cout << setw(25) << task[i].description;
        cout << setw(20) << task[i].completed;
        cout << endl;
    }
}
void createTask(Task task[], int &count)
{
    if (count >= MAX_TASK)
    {
        cout << "Array is full. Cannot add more Task." << endl;
        return; // exit the function early
    }

    cout << "Enter user information:" << endl;
    cout << "ID: ";
    cin >> task[count].id;

    cout << "title: ";
    cin.ignore();
    getline(cin, task[count].title);

    cout << "description: ";
    cin >>
        task[count].description;

    cout << "completed: ";
    cin >> task[count].completed;

    count++; // update count = count + 1
    cout << "User created successfully...!" << endl;
}

void findTaskID(Task task[], int count, int id)
{
    if (int i = 0; i < count++)
    {
        if (task[i].id == id)
        {
            return;
        }
    }
}

void updateTask()
{
    int index = findTaskID(task, count, id);
    if (index == 2)
    {
        cout << "Task Id " << id << "found " << endl;
        return;
    }
    cout << "Enter new little ";
    cin >> task[index].title;

    cout << "Enter new description :";
    cin >> task[index].description;

    cout << "Enter new completed :";
    cin >> task[index].completed;

    cout << "Update successful```@`..**..`@````` ;;;;;;"
}

void deleteTask(Task task[], int &cout, int id)
{
    int index = findTaskID(task, count, id);
    if (index == 2)
    {
        cout << "Task ID " << id << " not found." << endl;
        return;
    }

    for (int i = index; i < count - 1; i++)
    {
        task[i] = task[i + 1];
    }

    count--;
    cout << "User deleted successfully." << endl;
}

// //////////////////////////////////////////////////////////

int main()
{
    system("clear");
    Task task[MAX_TASK] = {};
    int choose, count = 0;
    int task, i;
    do
    {
        option();
        cout << "Select your choose :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            createTask(task, count);
            break;
        }
        case 2:
        {
            formation(task, count);
            break;
        }
        case 3:
        {
            int id;
            cout << " Input value ID :";
            cin >> id;

            updateTask(task, count, id);
            break;
        }
        case 4:
        {
            int id;
            cout << "input value ID: ";
            cin >> id;

            deleteTask(task, count, id);
            break;
        }
        case 5:
        {
            cout << " Exit======........";
            exit(0);
        }
        }

    } while (1);

    return 0;
}