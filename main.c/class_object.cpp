
#include <iostream>

using namespace std;

class Person
{
private:
    int id;
    string name;
    int age;

public:
    void inputPersonInfo()
    {
        cout << "Input person Id :";
        cin >> id;
        cout << "Input person Name :";
        // cin>>name;
        cin.ignore();
        getline(cin, name);
        cout << "Input person Age:";
        cin >> age;
        cout << "+++++++++++++++++++++++++++++" << endl;
    }
    void getPersonInfo()
    {
        cout << "Person id :" << id << endl;
        cout << "Person name : " << name << endl;
        cout << "Person Age : " << age << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
    }
};

int main()
{
    Person person1;
    person1.inputPersonInfo();
    person1.getPersonInfo();
    Person person2;

    return 0;
}