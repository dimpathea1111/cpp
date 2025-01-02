#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    cout << "1. Create list of array.";
    int n, i, sen, temp; //=12
    cout << "\n Enter number n :";
    cin >> n;
    int a[11] = {10, 30, 40, 50, 70, 60, 90, 80, 100, 105, 102};
    cout << "\n 1.2 Input form keyboard. ";
    do
    {
        cout << "\n Choose your sen :   ";
        cin >> sen;
        switch (sen)
        {
        case 1:
        {

            cout << "\n Output list of vector on screen";
            for (i = 0; i < n; i++)
            {
                cout << a[i] << "\t";
            }
            break;
        }
        case 2:
        {
            cout << "\n 2. Search each element in vector";
            int x;
            for (i = 0; i < n; i++)
            {
                if (a[i] == x)
                {
                    cout << "\n Value found " << a[i] << endl;
                    if (a[i] >= x)
                    {
                        cout << "\n Value not found";
                    }
                }
            }
            break;
        }
        case 3:
        {
            cout << "\n 4. Show list of vector ofter sort";
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
            break;
        }
        case 4:
        {
            cout << "\n5. Update new value to array.";
            for (i = 0; i < n; i++)
            {
                cout << "\n"
                     << a[i] << endl;
            }
        }
        break;
        }

        return 0;
    }