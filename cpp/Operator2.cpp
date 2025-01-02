#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("clear");
    int i, n;
    cout << "tt.Practice file operator  " << endl;
    cout << "\n1. Write data to binary file" << endl;
    ofstream fout;
    fout.open("Myfile.bin");
    if (fout.fail())
    {
        cout << "Can not open" << endl;
        return 0;
    }
    int x = 43;
    float y = 7.25;
    char ch = 'R';
    char Name[40] = "Welcome to practice binary file";
    fout.write((char *)&x, sizeof(int));
    fout.write((char *)&y, sizeof(float));
    fout.write((char *)&ch, sizeof(char));
    fout.write((char *)&Name, 40 * sizeof(char));
    fout.close();
    cout << "============= end 1 processe 2===========" << endl;
    cout << "2.Read data form binary file" << endl;
    cout << "A.Read data form Myfile.bin and output" << endl;
    ifstream fin;
    fin.open(Myfile.bin, ios::binary);
    ofstream fp;
    fp.open(Myfile.bin, ios::in | ios::binary);

    return 0;
}