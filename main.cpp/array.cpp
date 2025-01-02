#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    system("clear");
    int i, n;
    // int a = 12;
    // int b[] = {1, 2, 3, 4};
    // practice1
    // cout << b[1];
    // cout << "\nArray length :" << sizeof(b) / sizeof(b[0]) << endl;
    // practice2 ACCESE ARRAY ELEMENT
    // for ( i = 0; i < sizeof(b) / sizeof(b[0]); i++)
    // {
    //     cout << "Value :" << b[i] << endl;
    // }
    // PRACTICE3 ACCESE ARRAY ELEMENT
    // for (int i : b)
    // {
    //     cout << "Value :" << i << endl;
    // }

    // practice3 ACCESE ARRAY ELEMENT
    // for (auto i : b)
    // {
    //     cout << "Value :" << i << endl;
    // }

    // string name[] = {"kavo", "juty", "lobno", "chiba", "koju"};
    // string name[5] = {"kavo", "juty", "lobno", "chiba", "koju"};
    // for (string i : name)
    // {
    //     cout << "Name:" << i << endl;
    // }
    // // 11111111111
    // for (auto i : name)
    // {
    //     cout << "\tName :" << i << endl;
    // }
    // 2222222222

    // int size;
    // cout << "Insert number of name :";
    // cin >> size;
    // string name[size];
    // cin.clear();
    // for (i = 0; i < size; i++)
    // {
    //     cout << "Insert name [" << i << "]:";
    //     cin.ignore();
    //     getline(cin, name[i]);
    // }
    // cout << "\nThese is all inserted name :";
    // for (string name : name)
    // {
    //     cout << name << endl;
    // }

    // UPDATE ARRAY
    // string name[] = {"jonh", "chilly"};
    // cout << "Jonh new old version : \n";
    // cout << name[0] << endl;
    // name[0] = "jonh a chilly";
    // cout << "Jonh new a name version: \n";
    // cout << name[0] << endl;
    int size;
    cout << "[+] Insert number of students' name to set up system: ";
    cin >> size;
    string studentName[size];
    // if (studentName == 0)
    // {
    //     cout << "No student to update" << endl;
    // }
    // else
    // {
    //     string oldName, newName;
    //     cout << "Insert oldName :";
    //     cin.ignore();
    //     getline(cin, oldName);
    //     int found, i;
    //     // for( i=0; i<studentName; i++){
    //     // if (studentName[i] == oldName)
    //     // {
    //     cout << "Insert newName :";
    //     cin.ignore();
    //     getline(cin, newName);
    //     found = true;
    //     cout << "Name update successfully" << endl;
    //     // }
    // }
    if (studentName == 0)
    {
        cout << "No student to update" << endl;
    }
    else
    {
        string oldName, newName;
        cout << "Insert oldName :";
        cin.ignore();
        getline(cin, oldName);
    }

    return 0;
}