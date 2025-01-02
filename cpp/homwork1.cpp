#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    int i, j, n, s;
    cout << "n :";
    cin >> n;

    cout << "---- A ----" << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    cout << endl;

    // A

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n; j++)
        {
            cout << "";
        }
        for (s = 0; s <= 5; s++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    cout << "---- B ----" << endl;
    for (i = n; i >= 1; i--)
    {
        for (j = 5; j >= 1; j--)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    cout << endl;

    cout << "---- C ----" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---- D ----" << endl;

    for (i = 0; i < n; i++)
    {

        for (s = 5; s >= 1; s--)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---- E ----" << endl;

    for (i = 1; i <= n; i++)
    {
        // cout << endl;
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---- F ----" << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---- G ----" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " .";
        }
        for (s = 0; s <= i; s++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---- H ----" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---- I ----" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (s = 0; s < 2 * i + 1; s++)
        {
            cout << "A";
        }
        cout << endl;
    }

    //// 1 x 1
    int num, res;
    printf("Enter a number :");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        res = num * i;
        printf("%d x %d  =%d\n", num, i, res);
    }

    // 1 x 1
    // cout << "n :";
    // cin >> n;
    // for (i = 1; i <= 10; i++)
    // {
    //     cout << " 1 x i =" << " " << n * i << endl;
    // }
    // 1 x 100
    // printf("Enter a number :");
    // scanf("%d", &num);
    // for (i = 1; i <= 100; i++)
    // {
    //     for (int j = 0; j <= 100; j++)
    //     {

    //         res = num * i;
    //         printf("%d x %d  =%d\n", num, i, res);
    //     }
    //     printf("\n");
    // }
    cout << "Enter N :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for ()
    }
    return 0;
}