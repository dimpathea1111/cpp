#include <iostream>
#include <string>

using namespace std;
struct person
{
    int id;
    float salary;
    string name;
    char gender;
    string gmail;
    int tel;
};
int main()
{
    // system("cls");
    person p;
    cout << "---++++++++++++++++--Insert information of person--+++++++++++++++++--- " << endl;
    cout << "\nInput Id :";
    cin >> p.id;
    cout << "\nInput Name :";
    cin >> p.name;
    // cin.ignore();
    // getline(cin,name);
    cout << "\nInput Gender :";
    cin >> p.gender;
    cout << "\nInput gmail :";
    cin >> p.gmail;
    cout << "\nInput Salary :";
    cin >> p.salary;
    cout << "\nInput Tel :";
    cin >> p.tel;
    cout << "\n +++++++++++++++++++++ Output information of person ++++++++++++++++++++" << endl;
    cout << "\n ID :" << p.id;
    cout << "\n Name :" << p.name;
    cout << "\n Gender :" << p.gender;
    cout << "\n Gmail :" << p.gmail;
    cout << "\n Salary :" << p.salary;
    cout << "\n Tel :" << p.tel;

    return 0;
}
