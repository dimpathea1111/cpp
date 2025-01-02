#include <fstream>
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main()
{
    cout << "Practice file operator " << endl;
    int n = 7, i, j;
    int a[7] = {
        12, 23, 43, 34, 56, 28, 79};
    cout << "1.Write data file Array.bin " << endl;
    ofstream fout;
    fout.open("Array.bin", ios::binary);
    if (fout.fail())
    {
        cout << "Error open file for write" << endl;
        return 0;
    }
    for (i = 0; i < 7; i++)
        fout.write((char *)&a[i], sizeof(int));
    fout.close();
    cout << "2. Read data form Array.bin and output on sreen" << endl;
    int up[45];
    ifstream fin;
    fin.open("Array.bin", ios::binary);
    if (fin.fail())
    {
        cout << "Error open file for read" << endl;
        return 0;
    }
    for (i = 0; i < 7; i++)
        fin.read((char *)&up[i], sizeof(int));
    // fin.close();
    cout << "\t up[" << i << "]=" << up[i] << endl;
    cout << "3.Update 15% with index %2=0 and then write to update.bin " << endl;
    fstream fp["Array.bin", ios::ate | ios::in || ios::out | ios::binary];
    if (fp.fail())
    {
        cout << "Error open file for write and Read" << endl;
        return 0;
    }
    fout.open("UpArray.bin", ios::binary);
    if (fout.fail())
    {
        cout << "Error open file for write" << endl;
        return 0;
    }
    for (i = 0; i < 7; i++)
    {
        fp.read((char *)&up[i], sizeof(int));
        if (1 % 2 ! = 0)
            up[i] = up[i] + up[i] + 0.15;
        fout1.write((char *)&up[i], sizeof(int));
    }
    fp.close();
    fout.close();
    cout << "4. Read data form UpArray.bin and ouput on screen" << endl;
    fin.open("UpArray.bin", ios::ate | ios::binary);
    if (fin.fail())
    {
        cout << "Error open file" << endl;
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        fin.read((char *)&up[i], sizeof(int));
    }
    fin.close();

    return 0;
}