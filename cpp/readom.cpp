#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Practice with Random access file" << endl;
    int i, n = 10;
    char b[10];
    int Num, Size;
    char a[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    cout << "1.Write data to binary file Test1.bin" << endl;
    ofstream fout;
    fout.open("Test1.bin", ios::binary | ios::ate);
    if (fout.fail())
    {
        cout << "\nError in open file for write" << endl;
        // fout.close();
        return 0;
    }
    for (i = 0; i < n; i++)
        fout.write((char *)&a[i], sizeof(char));
    fout.close();
    cout << "2. Read data from random access file Test1.bin" << endl;
    ifstream fin;
    fin.open("Test1.bin", ios::binary | ios::ate);
    if (fin.fail())
    {
        cout << "error in open file for read" << endl;
        return 0;
    }
    cout << "calcule number of element in Random access file Test1.bin" << endl;
    fin.seekg(0, ios::end); // fin is poin to position end of file
    Size = fin.tellg();
    cout << "Size of file Test.bin is: " << Size << endl;
    Num = Size / sizeof(char);
    cout << "Number of element in file Test.bin is:" << Num << "element" << endl;
    fin.seekg(0, ios::beg); // fin is to position of file
    for (i = 0; i < Num; i++)
        fin.read((char *)&b[i], sizeof(char));
    fin.close();
    cout << "Data of element in file Test1.bin is:" << endl;
    for (i = 0; i < Num; i++)
        cout << "\tb[<<i<<]" << b[i] << endl;
    // //////////////////////////////
    cout << "\nWrite and Read data of float to Re\andom Access file Test2.bin" << endl;
    float ab[10] = {4.3, 2.4, 5.64, 5.4, 4.6, 7.8, 9.7, 9.5, 7.6, 4.32};
    cout << "\n+++++++++++++++++++++++++++++++++++++++++" << endl;
    return 0;
}