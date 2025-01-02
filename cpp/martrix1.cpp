
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void display()
{
    cout << "1.Create list of matrix" << endl;
    cout << "2. With assign value to array" << endl;
    cout << "3. With input form keyboard " << endl;
    cout << "4. Output list of Matrix (A and B) on screen" << endl;
    cout << "5. Sum Matrix (Sum = A + B)" << endl;
    cout << "6. Multiple Matrix (Mol = A * B)" << endl;
}

int main()

{
    system("clear");

    int i, j;
    int choice;
    int a[2][5];
    int b[2][5];

    do
    {
        system("clear");
        display();
        cout << "-------- select your option ---------- : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            system("clear");
            cout << "2. Output list of matrix (a and b) on screen " << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    cout << a[i][j] << endl;
                }
                cout << endl;
            }
        }
        break;
        case 3:
        {
            cout << " 3. =========Sum Matrix (a+ b)==========" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    cout << a[i][j] + b[j][i] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 4:
        {
            cout << "4. Multiple Matrix (mol a * b)" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    cout << "Enter value for a[" << i << "][" << j << "]:";
                    // cout << "Enter value for b[" << j << "][" << i << "]:" << endl;
                    // cin >> a[i][j] * b[j][i] << endl;
                    cin >> a[i][j];
                }
            }
            break;
        }
        default:
        {
            system("clear");
            cout << "bye.........!" << endl;
            exit(0);
        }
        }
    } while (1);

    return 0;
}