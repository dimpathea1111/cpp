#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "1. Practice file operator " << endl;
    cout << "1.1 Write data form binary.file " << endl;
    int x = 43;
    float y = 7.67;
    char ch = 'B';
    char name[40] = "welcome to practice ";
    fstream fout;
    fout.open("binary");
    if (fout.fail())
    {
        cout << "Error open file for Write " << endl;
        return 1;
    }
    fout.write((char *)&x, sizeof(int));
    fout.write((char *)&y, sizeof(float));
    fout.write((char *)&ch, sizeof(char));
    fout.write((char *)&name, sizeof(char));
    fout.open("Myarray.bin");
    long a[7] = {45, 30, 29, 32, 20, 90};
    fout.close();
    cout << "1.2 Read data form binary.file" << endl;
    cout << "A. Read data form binary.file and output" << endl;
    ifstream fin;
    fin.open("binary.file");
    if (fin.fail())
    {
        cout << "Error open file for Read" << endl;
        return 1;
    }
    fin.read((char *)&x, sizeof(int));
    fin.read((char *)&y, sizeof(float));
    fin.read((char *)&ch, sizeof(char));
    fin.read((char *)&name, sizeof(char));
    cout << "X :" << x << "\t" << "Y :" << y << "\t" << "Ch :" << ch << "\t" << "Name :" << name << endl;
    fin.close();
    cout << "B. Read data form Array.bin and output after update 15% to data " << endl;
    ifstream fin1;
    fin1.open("Array.bin", ios::binary);
    if (fin1.fail())
    {
        cout << "Error open file " << endl;
        return 1;
    }
    fin1.read((char *)&a, sizeof(long));
    int i, n;
    cout << "Enter n:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
    }

    return 0;
}