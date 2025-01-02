#include <iostream>

using namespace std;
// oop 4 : encapsulation
// - In C++, encapsulation involves combining similar data and functions into a single unit called a class.

class Person
{
private:
    int id;
    string name;
    int age;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Person person1;
    Person person2;
    person1.setId(1);
    person1.setName("loppy");
    person1.setAge(15);
    cout << "Person Id :" << person1.getId() << endl;
    cout << "Person Name :" << person1.getName() << endl;
    cout << "Person Age :" << person1.getAge() << endl;
    cout << "+++++++++++++++++++++++++++++++++++++" << endl;
    person2.setId(2);
    person2.setName("Nama");
    person2.setAge(16);
    cout << "Person Id :" << person2.getId() << endl;
    cout << "Person Name :" << person2.getName() << endl;
    cout << "Person Age :" << person2.getAge() << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++" << endl;

    return 0;
}