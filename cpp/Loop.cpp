#include <stdio.h>
#include <iostream>
using namespace std;

#define W cout
#define P printf
#define R cin
#define S scanf

int main()
{
    int n, i, s;
    int code;

    W << "\n practice use loop statement .";
    printf("\n\t For loop");
    cout << "\n while loop";
    printf("\n do\while loop");
    cout << "\n label loop";
    W << "\n==============================";
    printf("\n\t Enter n =");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        cout << "\n choose (1,2,3,4 or 5)";
        cin >> code;
        switch (code)
        {
        case1:
            s = 0;
            for (i = 1; i <= n; i++)
                ;
            s = s + i;
        }
        printf("sum(%d)=%d; n,s");
        break;
    }

    return 0;
}