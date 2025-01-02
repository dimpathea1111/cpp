#include <fstream>
#include <cmath>
#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
    int code;
    string name;
    float math, electronic, it, fundamental, english, khmer;
    char gender; // M for Male, F for Female
    int age;
    string tel;
};

void input(Student students[], int numStudents)
{
    ofstream outFile("students.txt");

    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    for (int i = 0; i < numStudents; ++i)
    {
        outFile << students[i].code << "\t"
                << students[i].name << "\t"
                << students[i].math << "\t"
                << students[i].electronic << "\t"
                << students[i].it << "\t"
                << students[i].fundamental << "\t"
                << students[i].english << "\t"
                << students[i].khmer << "\t"
                << students[i].gender << "\t"
                << students[i].age << "\t"
                << students[i].tel << "\n";
    }

    outFile.close();
    cout << "Student data successfully written to file." << endl;
}

void output()
{
    ifstream inFile("students.txt");

    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    int code, age;
    string name, tel;
    float math, electronic, it, fundamental, english, khmer;
    char gender;
    cout << "\nCode\tName\tMath\tElec\tIT\tFund\tEng\tKhmer\tGender\tAge\tTel" << endl;
    while (inFile >> code >> name >> math >> electronic >> it >> fundamental >> english >> khmer >> gender >> age >> tel)
    {
        cout << code << "\t"
             << name << "\t"
             << math << "\t"
             << electronic << "\t"
             << it << "\t"
             << fundamental << "\t"
             << english << "\t"
             << khmer << "\t"
             << gender << "\t"
             << age << "\t"
             << tel << endl;
    }

    inFile.close();
}

void displayStuckStudents()
{
    ifstream inFile("students.txt");

    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    int code, age;
    string name, tel;
    float math;
    float math, electronic, it, fundamental, english, khmer;
    char gender;

    cout << "\nStuck Students (failed in 3 or more subjects):" << endl;
    cout << "----------------------------------------------------------------------------------" << endl;
    cout << "Code\tName\tMath\tElec\tIT\tFund\tEng\tKhmer\tGender\tAge\tTel" << endl;
    while (inFile >> code >> name >> math >> electronic >> it >> fundamental >> english >> khmer >> gender >> age >> tel)
    {
        int failCount = 0;
    }
    if ()
}

int main()
{

    return 0;
}