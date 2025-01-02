#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;
// Update Array

int main()
{
    system("clear");
    cout << "Create a system to insert students name" << endl;
    string studentName;
    int opt, i;
    while (true)
    {
        cout << "Choose your number :";
        cin >> opt;
        switch (opt)
        {
            cout << "insert option :";
            cin >> opt;
        case 1:
            cout << "1. List all students name :";
            for (string n : studentName)
            {
                cout << "name :" << studentName << endl;
            }
            break;
        case 2:
            cout << "2. Add new Students name " << endl;
            cout << "Insert student name :";
            cin >> studentName;
            cout << "This is name add :" << studentName;
            break;
        case 3:
            cout << "Update student name by interesting the old name " << endl;
            cout << "Jonh new old version : \n";
            cout << studentName[0] << endl;
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "-------------- bye +++++++++++++++++" << endl;
        }
    }
    return 0;
}