#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("clear");
    string str[] = {"A", "b", "a", "c", "C", "B"};
    int i, j;
    string temp;
    cout << "1. Create an array of string to insert names." << endl;
    cout << "2. Sort these names ascendingly." << endl;
    cout << "3. Print out all names after sorted." << endl;
    int length = sizeof(str) / sizeof(str[0]);

    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - 1; j++)
        {

            if (str[i] > str[i + 1])
            {
                temp = str[i + 1];
                str[i + 1] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "sort array in ascending order :";
    for (i = 0; i < length; i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}
