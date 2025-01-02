
//  Name : dim pathea
// class : M3 year1
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void display()
{
    cout << "1.Create list of matrix" << endl;
    cout << "\tA. With assign value to array" << endl;
    cout << "\tB. With input form keyboard " << endl;
    cout << "2. Output list of Matrix (A and B) on screen" << endl;
    cout << "3. Sum Matrix (Sum = A + B)" << endl;
    cout << "4. Multiple Matrix (Mol = A * B)" << endl;
}
int main()
{
    system("clear");
    int a[3][4];
    int b[3][4];
    int sum[100][100];
    int i, j, choice;

    display();
    do
    {
        cout << "------- select your option --------------- :";
        cin >> choice;
        switch (choice)
        {

        case 1:
        {
            system("crear");
            cout << "-----------2. Output list of Matrix (A and B) on screen-------------" << endl;
            cout << "Enter value of matrix a :" << endl;

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)

                {
                    cout << "Value for a[" << i << "][" << j << "]: ";

                    cin >> a[i][j];
                }
                cout << endl;
            }
            break;
        }
        case 2:
        {
            cout << "Enter value of matrix b :" << endl;

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    cout << "Value for b[" << j << "][" << i << "]: ";

                    cin >> b[j][i];
                }
                cout << endl;
            }
            break;
        }
        case 3:
        {
            cout << "-----------3. Sum Matrix (Sum = A + B)------------" << endl;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)

                {
                    // cout << "\n Value Sum  a[" << i << "][" << j << "] " << "+" << " b[" << i << "][" << j << "]: ";
                    //  << a[i][j] + b[j][i];
                    sum[i][j];
                    cout << endl;
                }
                cout << endl;
            }
            break;
        }
        case 4:
        {
            cout << "---------4. Multiple Matrix (Mul = A * B)-----------" << endl;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    cout << "\n Value multiple  a[" << i << "][" << j << "] " << "*" << " b[" << i << "][" << j << "]: "
                         << a[i][j] * b[j][i];
                }
                cout << endl;
            }
            break;
        }
        default:
        {
            system("clear");
            cout << "Thank you +++ !!! --" << endl;
            cout << "Bye.............!";
            exit(0);
        }
        }
    } while (1);

    return 0;
}
