#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Practice file operator------------!!" << endl;
    float a[7] = {3.3, 2.3, 4.5, 4.2, 6.2, 6.4};
    int n = 7, i;
    char *FileName = "Array.bin";
    cout << "1. Write Array to file:" << FileName << endl;
    ofstream fout;
    // fout.open("FileName", ios::binary);
    fout.open(FileName, ios::binary);
    if (fout.fail())
    {
        cout << "\nError open file" << endl;
        return 0;
    }
    for (i = 0; i < n; i++)
        fout.write((char *)&a[i], sizeof(float));
    fout.close();
    cout << "2. Read data of array form file" << FileName << "\nand then copy to test.bin" << endl;
    float b[45];
    ifstream fin;
    ofstream fout1;
    fin.open("Array.bin", ios::binary);
    if (fin.fail())
    {
        cout << "Error open file";
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
    fin.read((char *)&b[i], sizeof(float));
    fin.close();
    cout << "\n <3. update 15% to Test.bin and then write to update.bin" << endl;
    float up[50];
    fstream fp1, fp2;
    fp1.open("Test.bin", ios::binary | ios::in);
    if (fp1.fail())
    {
        cout << "\nError open file" << endl;
        return 0;
    }
    fp2.open("update.bin", ios::binary | ios::out);
    if (fp2.fail())
    {
        cout << "Error open file" << endl;
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        up[i] = up[i] + up[i] * 0.15;
        fp2.write((char *)&up[i], sizeof(float));
    }
    fp1.close();
    fp1.close();
    cout << "\n4.Read data form update.bin" << endl;
    float ab[50];
    fstream fp3;
    fp3.open("update.bin", ios::binary | ios::in);
    if (fp3.fail())
    {
        cout << "Error open file" << endl;
        return 0;
    }
    int j;
    float temp;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (ab[i] > ab[j])
            {
                temp = ab[i];
                ab[i] = ab[j];
                ab[i] = temp;
            }
    for (i = 0; i < n; i++)
    {
        cout << ab[i] << endl;
    }
    return 0;
}