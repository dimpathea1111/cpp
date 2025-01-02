#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    cout << "1. Create list of vector";
    int a[7] = {13, 45, 60, 87, 56, 43, 74};
    cout << "\n1.1 Input form keyboard ";
    printf("\n2. Output list of vector on screen");
    int n, i, x, temp; // n=7
    cout << "\n Enter number n :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    printf("\n3. Search each element in vector");
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "\n found";
        }
        if (a[i] > x)
        {
            cout << "\n not found";
        }
    }
    cout << "\n 4. Show list of array after sort";
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\n5. Update new value to array";

    return 0;
}