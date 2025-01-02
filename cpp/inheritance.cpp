#include <iostream>

using namespace std;
// Person is Supper class
class Person
{
private:
public:
    int id;
    string name;
    int age;
    void speak(string title)
    {
        cout << title << "  is speaking" << endl;
    }
};
// Teacher: sub or child class
class Teacher : public Person
{
};

class Student : private Person
{
};

int main()
{
    Teacher teacher1;
    Teacher teacher2;
    Student student;

    teacher1.id = 1;
    teacher1.name = "kojo";
    teacher1.age = 18;
    teacher1.speak("Teacher");
    cout << "Teacher ID :" << teacher1.id << endl;
    cout << "Teacher Name :" << teacher1.name << endl;
    cout << "Teacher Age :" << teacher1.age << endl;
    cout << "++++++++++++++++++++++++" << endl;
    teacher1.id = 1;
    teacher2.name = "kojo";
    teacher2.age = 18;
    teacher2.speak("Teacher");
    cout << "Teacher ID :" << teacher2.id << endl;
    cout << "Teacher Name :" << teacher2.name << endl;
    cout << "Teacher Age :" << teacher2.age << endl;
    cout << "++++++++++++++++++++++++" << endl;
    return 0;
}