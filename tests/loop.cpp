#include <stdio.h>
// #include<conio.h>
#include <iostream>

using namespace std;

#define W cout;
#define P printf;
#define R cin;
#define S scanf;

int main()
{
    cout << "\n\t. practice 3.3 : Use loop statement";
    printf("\n\t\t1. For loop");
    cout << "\n\t\t2.While loop";
    printf("\n\t\t3. Do\While loop");
    cout << "\n\t\t4. Label loop";
    cout << "\n===============================================";
    printf("\n\t.Proble: 1+2+3+.......+n");

    int n, i, s;
    int code;
    printf("\n\t\t. Enter n=");
    scanf("%d", &n);
    do
    {
        cout << "\n.Choose(1,2,3,4 or 5)";
        cin >> code;
        switch (code)
        {
        case 1:
            s = 0;
            for (i = 1; i <= n; i++)
                s = s + i;
            printf("Sum(%d)=%6", n, s);
            break;
        case 2:
            s = 0;
            i = 1;
            while (i <= n)
            {
                s = s + i;
                i = i + 1;
            }
            cout << "\Sum(" << n << "" << s;
            break;
        case 4:
            s = 0;
        Again:
            s = s + i;
            i = i + 1;
            if (i <= n)
                goto Again;
            cout << "\nSum(" << n << ")=" << s;
            break;
        default:
            cout << "\n Your choose wrong!";
        }
    } while (1);
    return (0);
}