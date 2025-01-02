#include <iostream>
#include <string>
#include <cmath>
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

void addTask(Task task[], int count, int id)
{
    cout << "Enter task id :";
    cin >> task[count].id;

    cout << "Enter task title :";
    cin.ignore();
    getline(cin, task[count].title);

    cout << "Enter task description :";
    cin.ignore();
    getline(cin, task[count].description);

    task[count].completed = false;
}
void showTask(Task task[], int count)
{
    header();
    for (int i = 0; i < count; i++)
    {
        cout << left << "";
        cout << setw(10) << task[i].id;
        cout << setw(20) << task[i].title;
        cout << setw(25) << task[i].description;
        if (task[i].completed)
        {
            cout << setw(20) << "completed";
        }
        else
        {
            cout << setw(20) << "Uncompleted";
        }
        cout << endl;
    }
}

int findTaskId(Task task[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (task[i].id == id)
        {
            return i;
        }
        return -1;
    }
}

void updateTask(int coun, Task task[], int id)
{
    int count = 0;
    int index = findTaskId(task, count, id);
    if (index == -1)
    {
        cout << "Task id " << id << "Not found" << endl;
        return;
    }
    cout << "Enter new title :";
    cin >> task[index].title;
    cout << "Enter new description :";
    cin >> task[index].description;
    cout << "Enter new completed :";
    cin >> task[index].completed;
    count++;
}

void deleteTask(Task task[], int &count, int id)
{
    int index = findTaskId(task, count, id);
    if (index == -1)
    {
        cout << "Task id" << id << "Not found" << endl;
        return;
    }
    for (int i = index; i < count; i++)
    {
        task[i] = task[i + 1];
    }
    count--;
    cout << "Task delete successfull" << endl;
}

void toggleTask(Task task[], int index, int id)
{
    if (index >= 0 && index < id)
    {
        task[index].completed = !task[index].completed;
        cout << "task sucessfull" << endl;
    }
    else
    {
        cout << "Invalid task index." << endl;
    }
}

int main()
{
    system("clear");
    int choose;
    int id;
    Task task[MAX_TASK] = {};
    string title;
    string description;
    bool completed;
    int count = 0;

    do
    {
        exercise();
        cout << "Select your choose ========= : ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            addTask(task, count, id);
            break;
        }
        case 2:
        {
            showTask(task, count);
            break;
        }
        case 3:
        {
            updateTask(count, task, id);
            break;
        }
        case 4:
        {
            int index;
            toggleTask(task, index, id);
            break;
        }
        case 5:
        {
            deleteTask(task, count, id);
            break;
        }
        case 6:
        {
            cout << "Exiting ++++++++++++++!!" << endl;
            exit(0);
        }
        }
    } while (1);

    return 0;
}