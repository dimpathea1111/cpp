#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void chaiman()
{
    cout << "1. Create string" << endl;
    cout << "\tA.Assing value to array" << endl;
    cout << "\tB. Input string form keyboard" << endl;
    cout << "2. Output value of string ( name , st1 , st2)" << endl;
    cout << "3. User stadard function of string" << endl;
}

int main()
{
    char name[45] = "Welcome to RUPP";
    char st1[50] = "There is no in my class who is friendly";
    char st2[50] = "But they are really good learners";
    chaiman();

    cout << " ==========  SHOW OUTPUT ==========" << endl;
    cout << "\t Assign value to string " << endl;
    cout << "Value name : " << name << endl;
    cout << "Value st1 : " << st1 << endl;
    cout << "Value st2 : " << st2 << endl;

    cout << "\t Input string form keyboard" << endl;
    cout << "\nInput Value of string second string Name : ";
    cin >> name;
    printf("\nInput first string st1 : ");
    scanf("%s", &st1);
    cout << "\nInput Value of string second string st2 : ";
    cin >> st2;
    return 0;
}