// Dim Pathea
// M3 year 1

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

    int i, j, n = 7;
    int a[7] = {10, 20, 30, 70, 90, 40, 50};
    int choice, item, found, Add, add, in;
    vector();

    do
    {
        cout << "\n Select your choice (1 2 3 4 5 6 7 ) : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\n Create list of vector : ";
            for (i = 0; i < 7; i++)
            {
                cout << "\t" << a[i];
            }
            break;
        }
        case 2:
        {
            cout << "2. Output list of vector on screen " << endl;
            for (i = 0; i < 7; i++)
            {
                cout << "Value of vector : " << a[i] << endl;
            }
            break;
        }
        case 3:
        {
            cout << "3. Seach each of element on screen" << endl;
            cout << " enter item :";
            cin >> item;
            for (i = 0; i < 7; i++)
            {
                if (item == a[i])
                {
                    cout << "value of item : " << "a[" << i << "]" << a[i] << endl;
                    found == 1;
                }
                if (found == 0)
                {
                    cout << "not found" << endl;
                }
            }
            break;
        }
        case 4:
        {
            cout << "4. Show list of vector after sort" << endl;
            int temp;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 7; j++)

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
            break;
        }
        case 5:
        {
            cout << "5. Update new value to array" << endl;
            cout << "\n enter  value add :";
            cin >> add;
            cout << "\n enter  value in :";
            cin >> in;
            for (i = 0; i < 7; i++)
                if (i == add - 1)
                {
                    a[i] = in;
                }
            cout << " list of vector after updated: " << endl;
            for (i = 0; i < n; i++)
            {
                cout << a[i] << endl;
            }
            break;
        }
        case 6:
        {
            cout << "\n\t6. Insert each element in vector";
            cout << "\n enter value add :";
            cin >> Add;
            cout << "\n insert value in :";
            cin >> in;
            for (i = n; i >= in; i--)
                a[i] = a[i - 1];
            a[i] = add;
            n++;

            cout << "list of vector after insert : " << endl;
            for (i = 0; i < n; i++)
            {
                cout << a[i] << endl;
            }
            break;
        }
        case 7:
        {
            int element;
            cout << "\n\t7. Delete each element in vector" << endl;
            cout << "\n enter element to delete:";
            cin >> element;
            for (i = 0; i < n; i++)
            {
                if (a[i] == element)
                {
                    for (j = i; j < n - 1; j++)
                        a[j] = a[j + 1];
                    found++;
                    i--;
                    n--;
                }
                if (found == 0)
                {
                    cout << "item not found " << endl;
                }
                else
                    cout << "element deleted success " << endl;
            }
            cout << "\n list of vector after deleted: " << endl;
            for (i = 0; i < n; i++)
            {
                cout << a[i] << endl;
            }
            break;
        }
        break;
        }
        system("clear");
        cout << "bye.........!" << endl;
        exit(0);
    } while (choice = 8);

    matrix();

    int A[2][3] = {{11, 33, 44}, {10, 20, 30}};
    int B[3][5] = {{23, 12, 34, 67, 50}, {10, 50, 15, 54, 76}};
    int y, x, c, column, row, choose;
    int k = 3, p = 2, g = 5;
    int s[100][100], mul[100][100], sum[100][100];
    do
    {
        cout << "SELECT YOU CHOOOSE =========== : ";
        cin >> choose;
        switch (choose)
        {
        case 'a':
        {
            cout << "\n Input Matrix from your Keyboard " << endl;
            cout << "\n Enter Coloumn =";
            cin >> column;
            cout << "\n Enter Row =";
            cin >> row;
            for (int y = 0; y < column; y++)
            {
                for (int x = 0; x < row; x++)
                {
                    cout << "\n Enter s[" << y << "][" << y << "]=" << endl;
                    cin >> s[y][x];
                }
            }
            cout << "\n Output Matrix  \n";
            for (int y = 0; y < column; y++)
            {
                for (int x = 0; x < row; x++)
                {
                    cout << s[y][x] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 'b':
        {
            cout << "output maxtrix A :" << endl;

            for (y = 0; y < p; y++)
            {
                for (x = 0; x < k; x++)
                {
                    cout << A[y][x] << "t";
                }
                cout << endl;
            }

            cout << "output maxtrix B :" << endl;
            for (y = 0; y < p; y++)
            {
                for (x = 0; x < g; x++)
                {
                    cout << B[y][x] << "\t";
                }
            }
            break;
        }
        case 'c':
        {
            cout << "Maxtrix of  Sum (A + B) :" << endl;
            for (y = 0; y < p; y++)
            {
                for (x = 0; x < k; x++)
                {
                    sum[y][x] = A[y][x] + B[y][x];
                }
            }
            for (y = 0; y < k; y++)
            {
                for (x = 0; x < g; x++)
                {
                    cout << sum[y][x] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 'd':
        {
            cout << "Maxtrix of Mul (A * B) :" << endl;
            for (y = 0; y < p; y++)
            {
                for (x = 0; x < k; x++)
                {
                    mul[y][x] = 0;
                    for (int c = 0; c < k; c++)
                    {
                        mul[y][x] = mul[y][x] + A[y][x] * B[y][x];
                    }
                }
            }
            for (y = 0; y < p; y++)
            {
                for (x = 0; x < g; x++)
                {
                    cout << mul[y][x] << "\t";
                }
                cout << endl;
            }
            break;
        }
        }
        cout << " The end !!!!";
        cout << "Thenk you";
        exit(0);
    } while (choose = 4);

    return 0;
}