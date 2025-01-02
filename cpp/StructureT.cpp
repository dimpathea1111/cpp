#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

struct student
{
    int id, Age, phone, score;
    string name;
    string Address;

    // cout<<"Enter student id:";
};
void studentNot()
{
    int id, Age, phone, score;
    string name;
    string Address;
    cout << "Enter student Id: ";
    cin >> id;

    cout << "Enter student Name: ";
    cin >> name;

    cout << "Enter student Age: ";
    cin >> Age;

    cout << "Enter student score: ";
    cin >> score;

    cout << "Enter student Phone: ";
    cin >> phone;

    cout << "Enter student Address: ";
    cin >> Address;
    cout << endl;
}

int main()
{

    int id, Age, phone, score;
    string name;
    string Address;
    int i, n, choose;
    // student;
    do
    {
        cout << "Select your choose ======= :: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            cout << "Enter student Id: ";
            cin >> id;

            cout << "Enter student Name: ";
            cin >> name;

            cout << "Enter student Age: ";
            cin >> Age;

            cout << "Enter student score: ";
            cin >> score;

            cout << "Enter student Phone: ";
            cin >> phone;

            cout << "Enter student Address: ";
            cin >> Address;
            cout << endl;
            studentNot;
            break;
        }

        case 2:
        {
            cout << left << "";
            cout << setw(10) << "ID";
            cout << setw(20) << "Name";
            cout << setw(20) << "Age";
            cout << setw(20) << "Score";
            cout << setw(20) << "Phone";
            cout << setw(20) << "Address";
            cout << endl;
            break;
        }
        case 3:
        {
            for (i = 0; i < 5; i++)
            {
                int item;
                if (item == 5)
                {
                    item = i;
                }
                studentNot;
                cout << id << endl;
                cout << name << endl;
                cout << Age << endl;
                cout << score << endl;
                cout << phone << endl;
                cout << Address << endl;
            }
            break;
        }
        }

    } while (1);

    return 0;
}