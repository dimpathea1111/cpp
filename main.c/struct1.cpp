#include <iostream>

using namespace std;
struct Person
{
    int id;
    string name;
    int age;
    string email;
    string password;
    string phoneNumber;
};

int main()
{
    Person person1;
    person1.id = 1;
    person1.name = "bnao";
    person1.age = 14;
    person1.email = "viva.ji@gmail.com";
    person1.phoneNumber = "08938748";

    cout << "Id :" << person1.id << endl;
    cout << "Name :" << person1.name << endl;
    cout << "Age :" << person1.age << endl;
    cout << "Email :" << person1.email << endl;
    cout << "phoneNumber :" << person1.phoneNumber << endl;

    return 0;
}