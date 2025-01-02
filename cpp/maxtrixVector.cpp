#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int i, j;
    int A[2][3] = {{11, 20, 30}, {20, 30, 40}};
    int B[3][2] = {{20, 22}, {30, 33}, {50, 60}};

    do
    {
        int choose;
        cout << "Select your choose --:: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            cout << "Assign value to array " << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    cout << A[i][j] << "\t";
                    cout << B[i][j] << "\t";
                }
                cout << endl;
            }
            break;
        }
        case 2:
        {
            cout << "" break;
        }
        }
    } while (1);

    return 0;
}