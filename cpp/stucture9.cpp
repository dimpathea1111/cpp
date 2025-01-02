#include <stdio.h>
#include <iostream>
#include <string>
#include <malloc.h>
#include <cmath>

using namespace std;
struct student
{
    int code;
    int Age;
    char name[20];
    char Address[50];
    char phone[20];
    float score;
    int dander;
};

void menu()
{
    cout << "========== Practice with structure of Student ==========" << endl;
    cout << "1. Create list of Student " << endl;
    cout << "2. output list of Student " << endl;
    cout << "1. sort list of Student " << endl;
    cout << "1. search list of Student " << endl;
    cout << "1. Insert new element list of Student " << endl;
    cout << "1. Delete one element form list of Student " << endl;
    cout << "1. Update each element form list of Student " << endl;
}

int main()
{
    int choose, i, j, n;
    menu();
    cout << "........ Enter to exit program! ......." << endl;

    do
    {
        cout << "Select your choose =============== :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            cout << "create list of Student" << endl;
            cout << "A.Assing list of Student on  sreen" << endl;
            cout << "";
            struct Student
            {
            };
            break;
        }
        }
    }
    (1);
    return 0;
}