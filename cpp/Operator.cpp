#include <fstream>
#include <cmath>
// #include<conio.h>
#include <iostream>
#include <string.h>

using namespace std;
// #define eof;

int main()
{
    char ch;
    //  "st=Hello World";
    string str = "Hello everyone";
    int px, x = 59;
    float y = 7.35;
    cout << "\nPractice 1 text file " << endl;
    cout << "\n1. Write data to Mytext.text" << endl;
    ofstream fout;
    fout.open("Mytext.text");
    fout << "\nWelcome to text file" << endl;
    fout << "Wtriting value of int float and string::" << endl;
    fout << "Value x=" << x << "\ty=" << y << endl;
    fout << "Value string =" << str << endl;
    fout.close();

    cout << "============= end 1 processe 2===========" << endl;

    cout << "\nPratice 2 Read data from file:Mytext.text" << endl;
    ifstream fin;
    fin.open("Mytext.text");
    if (fin.fail())
    {
        cout << "\n can not open file";
        return 1;
    }
    while (1)
    {
        ch = fin.get();
        if (fin.eof())
            ;
        break;
        cout << ch;
    }
    fin.close();

    // string str[45] = "Welcome to practice text file";
    cout << "\n3.copy from Mytext.text to Myfile.text" << endl;
    fstream fp1, fp2;
    fp1.open("Mytex.tex", ios::in);
    fp2.open("Myfile.text", ios::out);
    if (fp1.fail())
    {
        cout << "\n ============->*^.^*|-|*^.^*<-===============" << endl;
        cout << "\ncan not open file" << endl;
        return 0;
    }
    while (1)
    {
        char fp1, get();
        // char fp1;
        if (fp1.eof())
            ;
        break;
        fp2 << ch;
    }
    fp1.close();
    fp2.close();
    ofstream fout1;
    cout << "\n4. Appen data to Mytext.text." << endl;
    char str[45] = "Welcome to practice text file";
    // app :open new file dont old file
    ofstream fout1("Myfile.text", ios::app);
    if (fout1.fail())
    {
        cout << "can not open file" << endl;
        return 0;
    }
    fout1 << str << endl;
    fout1.close();
    cout << "\n=========================" << endl;
    cout << "\n5. show all data of Myfile.text on screen" << endl;
    ifstream fin1;
    fin.open("Myfile.text, ios::in");
    if (fin1.fail())
    {
        cout << "\ncan not open file";
        return 0;
        3
    }
    while (1)
    {
        cp = fp1.get;
        if (fp1.eof())
            break;
        fp2 << ch;
    }
    fp1.close();
    fp2.close();

    // Practice 3: Copy data from Mytext.text to Myfile.text
    // cout << "\nPractice 3: Copy from Mytext.text to Myfile.text" << endl;
    // ifstream fp1("Mytext.text");
    // ofstream fp2("Myfile.text");
    // if (fp1, fp2)
    // {
    //     cout << " opening files for copying!" << endl;
    //     return 1;
    // }
    // while (1)
    // {
    // }

    return 0;
}

// 3 . copy data from Mytext.text to Myfile.text.
//  4. Appen data to Mytext.text.
//   5. show all data of Myfile.text on screen

// if (!fp1 || !fp2)
//     {
//         cout << "Error opening files for copying!" << endl;
//         return 1;
//     }
//     while (fp1.get(ch))
//     {
//         fp2.put(ch);
//     }
//     fp1.close();
//     fp2.close();
//     cout << "Data copied to Myfile.text successfully!" << endl;