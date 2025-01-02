#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("clear");
    string str[] = {"a", "c", "C", "A", "B"};
    int length;
    int i, j;

    cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1. Create an array of string to insert names." << endl;
    cout << "2. Sort these names ascendingly." << endl;
    cout << "3. Print out all names after sorted." << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++" << endl;
    length = sizeof(str) / sizeof(str[0]);
    for (i = 0; i < length; i++)
    {
        // for (j = 0; j < i - 1; i++)
        // {
        if (str[i] > str[i + 1])
        {
            string temp;
            temp = str[i + 1];
            // str[i + 1] = str[j + 1];
            str[i + 1] = temp;
            ;
        }
        // }
    }
    // cout << "";
    for (i = 0; i < length; i++)
    {
        cout << str[i] << " ";
    }
    return 0;
}