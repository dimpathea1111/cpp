#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    system("clear");
    int choice;
    cout << "1. Create list of vector";
    cout << "1.1 Assing value to array";
    int i, j, n; // 7
    int a[7] = {10, 20, 30, 70, 90, 40, 50};
    do
    {
        cout << "\n2. Output list of vector on screen";
        cout << "selection of choice ==========  :";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\n Enter number n :";
            cin >> n; // 7
            for (int i = 0; i <= n; i++)
            {
                cout << a[i] << "\t";
            }
        }
        break;
        case 2:
        {

            cout << "\n3. Search each element on vector";

            int item, found;
            cout << "\n Enter items ";
            cin >> item;
            for (int i = 0; i < 1; i++)
            {
                if (item == a[i])
                {
                    cout << "found" << a[i];
                    found = 1;
                }
                else
                {
                    cout << "\n Not found";
                }
            }
        }
        break;
        case 3:
        {
            cout << "\n4. Show list if vector ofter sort";
            int temp;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)

                {
                    if (a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                    for (i = 0; i < n; i++)
                    {
                        cout << "\n Output array sort " << a[i], i;
                    }
                }
            }
        }
        break;
        case 4:
        {
            cout << "\n 5. Update list of vector to Array";
            cout << "\n ";
        }
        break;
        case 5:
        {
            int add, into;
            cout << "\n6. Insert each element in vector";
            cout << "\n enter array to insert= \t";
            cin >> add;
            cout << "\n put new array into=";
            cin >> into;
            for (i = n; i >= into; i--)
                a[i] = a[i - 1];
            a[i] = add;
            n++;
            cout << "\n output array after insertion=";
            for (i = 0; i < n; i++)
                cout << a[i] << "\t\t";
            // getch();
        }
        break;
        case 6:
        {
            cout << "\n7. Delete each element in vector";
        }
        }
    } while (choice = 8);

    return 0;
}