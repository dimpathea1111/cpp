#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;
struct Student
{
    int id;
    int age;
    string name;
    string gender;
    string email;
    string phoneNumber;
};

int main()
{
    system("cls");
    vector<Student> students;
    // set<Student> students;
    Student student1 = {1, "male", "holy@gmail.com", "0984567"};
    Student student2 = {2, "male", "poki@gmail.com", "094232"};
    Student student3 = {3, "man", "joyi@gmail.com", "09848233"};
    Student student4 = {4, "man", "kimik@gmail.com", "0986542"};
    Student student5;
    // students.insert(student1);
    // students.insert(student2);
    // students.insert(student3);
    // students.insert(student4);
    students.push_back(student1);
    students.push_back(student2);
    students.push_back(student3);
    students.push_back(student4);
    cout << "\nInput student ID :";
    int id;
    cin >> id;
    for (Student stu : students)
    {
        if (stu.id == id)
        {
            cout << "ID: " << stu.id << endl;
            cout << "Name: " << stu.name << endl;
        }
    }

    return 0;
}