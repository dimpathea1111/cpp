#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, n;
    float temp;
    cout << "PRACTICE FILE OPERATOR --------------*!*" << endl;
    cout << "\t1.Writ data to binary file" << endl;
    ofstream fout;
    // fout.open("binary.bin", ios:in);
    fout.open("Myfile.bin");
    // fout.open("binary.bin");
    if (fout.fail())
    {
        cout << "can not open file" << endl;
        return 1;
    }
    // a
    int x = 43;
    float y = 7.25;
    char ch = 'B';
    char Name[40] = "Welcome to practice binary file";
    fout.write((char *)&x, sizeof(int));
    fout.write((char *)&y, sizeof(float));
    fout.write((char *)&ch, sizeof(char));
    fout.write((char *)&Name, 40 * sizeof(char));
    // fout.close();
    // b
    fout.open("Myarray.bin");
    long a[7] = {45, 30, 29, 32, 20, 90};
    fout.close();
    cout << "\t2.Read dataq form binary file" << endl;
    cout << "A.Read data form Myfile.bin and output" << endl;
    ifstream fin;
    fin.open("Myfile.bin");
    fstream fp;
    fp.open("Myfile.bin, ios::binary");
    if (fin.fail())
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }
    fin.read((char *)&x, sizeof(int));
    fin.read((char *)&y, sizeof(float));
    fin.read((char *)&ch, sizeof(char));
    fin.read((char *)&Name, 40 * sizeof(char));
    cout << "x: " << x << "\ny: " << y << "\nch: " << ch << "\nName: " << Name << endl;
    fin.close();
    cout << "B.Read data from Myfile.bin and output after update 15% to data" << endl;
    ifstream fin1;
    fin1.open("Myfile.bin", ios::binary);
    if (fin1.fail())
    {
        cout << "error open file" << endl;
        return 0;
    }
    for (i = 0; i < 2; i++)
        // {
        x = x * 0.15;
    y = y * 0.15;
    cout << "\n\t Update x:" << x << endl;
    cout << "\n\t Update y:" << y << endl;
    cout << "\n\t Update ch:" << ch << endl;
    // }
    fin1.close();
    cout << "C.Write data of Myarray.bin after update to UpArray.bin" << endl;
    ifstream fout1;
    fout1.open("Myarray.bin", ios::binary);
    if (fout1.fail())
    {
        cout << "Error open file" << endl;
    }
    for (i = 0; i < 7; i++)
    {
        a[i] += a[i] *
    }
    //  ifstream fin("Myarray.bin", std::ios::binary);
    // ofstream fin("UpArray.bin", std::ios::binary | std::ios::app);  // Append mode

    cout << "\t3.Appen data (name input from keyboard ) to UpArray.bin and then output on screen" << endl;
    ofstream("UpArray.bin", std::ios::binary | std::ios::app);
    char name[40];
    cout << "Enter your name: ";
    cin.getline(name, 40);

    return 0;
}