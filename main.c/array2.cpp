#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_STUDENTS = 100;
    string students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do
    {
        cout << "1. List students" << endl;
        cout << "2. Add new student" << endl;
        cout << "3. Update student's name by old name" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer for getline

        switch (choice)
        {
        case 1: // List students
            cout << "Student List:" << endl;
            for (int i = 0; i < studentCount; i++)
            {
                cout << i + 1 << ". " << students[i] << endl;
            }
            if (studentCount == 0)
            {
                cout << "No students found." << endl;
            }
            break;

        case 2: // Add new student
            if (studentCount < MAX_STUDENTS)
            {
                cout << "Enter student name: ";
                getline(cin, students[studentCount]);
                studentCount++;
                cout << "Student added successfully." << endl;
            }
            else
            {
                cout << "Student list is full!" << endl;
            }
            break;

        case 3: // Update student's name by old name
            if (studentCount == 0)
            {
                cout << "No students to update." << endl;
            }
            else
            {
                string oldName, newName;
                cout << "Enter old name: ";
                getline(cin, oldName);
                bool found = false;
                for (int i = 0; i < studentCount; i++)
                {
                    if (students[i] == oldName)
                    {
                        cout << "Enter new name: ";
                        getline(cin, newName);
                        students[i] = newName;
                        found = true;
                        cout << "Name updated successfully." << endl;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "Student not found." << endl;
                }
            }
            break;

        case 4: // Exit
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default: // Invalid choice
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}
/*#include <iostream>
#include <string>
// #include<chrono>
#include <thread>

using namespace std;

int main()
{
    system("cls");
    /**
     * Create a system to insert students' name
     * This system contains 4 options
     * 1. List all students' name
     * 2. Add new student's name
     * 3. Update student's name by inserting the old name
     * 4. Exit
     */
/*
    int size;
    cout << "[+] Insert number of students' name to set up system: ";
    cin >> size;
    string studentName[size];
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
            system("cls");
            cout << "+ Insert student name option: \n";
            int index;
            cout << "[+] Insert student's name index: ";
            cin >> index;
            if (studentName[index] != "")
            {
                cout << "This is index already existed\n";
            }
            else
            {
                string sn;
                cout << "[+] Insert student's name: ";
                cin.ignore();
                getline(cin, sn);
                studentName[index] = sn;
                cout << "[+] Student name " + sn << " has been inserted succesfully.\n";
            }
            break;
            // default:
            //     cout << "[!] Invalid option\n";
        case 3:
            string names[] = {"kara", "popoa"};
            cout << "old name" << endl;
            cout << names[0] << endl;
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "@*****************! bye(: !******************@  " << endl;
        };
    }

    return 0;
}/*