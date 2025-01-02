#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int size;
    cout << "[+] Insert number of students' name to set up system: ";
    cin >> size;
    string studentName[size];
    string sn;

    while (true)
    {
        cout << "======== Student management System ==========\n";
        cout << "1. List students" << endl;
        cout << "2. Add new student\n";
        cout << "3. Update student's name by old name\n";
        cout << "4. Exit\n";
        cout << "=============================================\n";
        int opt;
        cout << "[+] Insert option: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            system("cls");
            cout << "+ List all students option:\n";
            for (string n : studentName)
            {
                if (n.length() == 0)
                {
                    cout << "[!] No student name.\n";
                }
            }
            for (string name : studentName)
            {
                cout << "Student: " << name << endl;
            }
            break;
        case 2:
            cout << "Insert student name opt :" << endl;
            int index;
            cout << "Insert student name index :";
            cin >> index;
            if (studentName[index] != "")
            {
                cout << "This is already exited" << endl;
            }
            else
            {
                // string sn;
                cout << "Insert student name :";
                cin.ignore();
                getline(cin, sn);
                studentName[index] = sn;
                cout << "Student name " + sn << "has been inserted successfully." << endl;
                break;
            case 3:
                if (studentName == 0)
                {
                    cout << "No student to update" << endl;
                }
                else
                {
                    string oldName;
                    cout << "Insert oldName :";
                    cin.ignore();
                    getline(cin, oldName);
                }
            }
            break;
        case 4:
            cout << "Exit the program." << endl;
            break;
        default:
            cout << "@******************! Bye(: !****************@" << endl;
        }
    }

    return 0;
}
/*
#include <iostream>
#include <string.h>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    string name[] = {"opo", "kopo", "vecy", "hyto"};
    int i;
    cout << "All name" << endl;
    for (string i : name)
    {
        cout << i << " ";
    }
    cout << "Insert name to " << endl;
    string names;
    cout << "Input name :";
    cin.ignore();
    getline(cin, names);
    int size;
    size = sizeof(names) / sizeof(names[0]);
    for (i = 0; i < sizeof; i++)
    {
        if (names[i] == name)
        {
            name[i] = "";
            break;
        }
    }
    return 0;
}
*/