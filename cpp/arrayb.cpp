#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
void vector()
{
    cout << "\n\t 1. Create list of vector";
    cout << "\n\t1.1 Assing value to array or";
    cout << "\n\t2. Output list of vector on screen ";
    cout << "\n\t3. Seach each of element on screen";
    cout << "\n\t4. Show list of vector after sort";
    cout << "\n\t5. Update new value to array";
    cout << "\n\t6. Insert each element in vector";
    cout << "\n\t7. Delete each element in vector";
}

void matrix()
{
    cout << "\n\\t1. Create list of matrix ";
    cout << "\n\tA. With assign value to array";
    cout << "\n\tB. With input form keyboard";
    cout << "\n\t2. Output list of matrix (A and B )";
    cout << "\n\t3. Sum matrix (Sum = A + B)";
    cout << "\nt\4, Multiple matrix (Mul = A * B)";
}

int main()
{
    system("chear");
    cout << "\nCreate list of vector";
    int a[10] = {10, 30, 50, 40, 20, 11, 33, 22, 44, 66};
    int choice, item, found, i, j;

    do
    {
        vector();
        cout << "========= Select you choice (1 2 3 4 5 6 7 8)  : ";
        choice;
        switch (choice)
        {
        case 1:
        {
            cout << "2. Output list of vector on screen a :" << endl;
            for (i = 0; i < 10; i++)
            {
                cout << "\t" << a[i];
            }
            cout << endl;
        }
        break;
        case 2:
        {
            cout << "\n3. Seach each of element on screen";
            cout << "\n Enter item :";
            cin >> item;
            for (i = 0; i < 10; i++)
            {
                if (item == a[i])
                {
                    cout << "\n element found " << a[i];
                }
            }
            if (i == a[i])
            {
                cout << "\n Element not found ";
            }
        }
        break;
        case 3:
        {
            cout << "\n4. Show list of vector after sort" << endl;
            ;
            for (i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (a[i] > a[j])
                    {
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            cout << "\n list vector of sort == :";
            for (i = 0; i < 10; i++)
            {
                cout << "\n"
                     << a[i];
            }
            cout << endl;
        }
        break;
        case 4:
        {
            cout << "\n5. Update new value to array";
            int R, add;
            cout << "\n Enter new value of add ==";
            cin >> add;
            cout << "\n Enter new value of R =";
            cin >> R;
            // cout<<"\n Outpist the array on the screen";
            for (i = 0; i < 10; i++)
                if (i == add - 1)
                    a[i] = R;
            cout << "\n Output list after update \n";
            for (i = 0; i < 10; i++)
            {
                cout << a[i] << "\t";
            }
        }
        break;
        case 5:
        {
            cout << "\n6. Insert each element in vector";
        }
        break;
        }

    } while (choice = 6);
    getch();

    return 0;
}
