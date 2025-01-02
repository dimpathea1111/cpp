#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, c;
    float delta, x1, x2;

    cout << "Value a :";
    cin >> a;
    cout << "Value b :";
    cin >> b;
    cout << "Value c :";
    cin >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                // {
                cout << "\n Equation has many roots" << endl;
            //     }
            // }
            // }
            else
            {
                cout << "Invalit equation" << endl;
            }
            else
            {
                x1 = float(-c) / b;
                printf("First equation has x=%f\n", x1);
            }
            else
            {
                delta = pow(b2) - 4 * a * c;
                if (delta < 0)
                {
                    cout << "second equation has no roots" << endl;
                }
            }
            else if (delta == 0)
            {
                printf("Secont equation has double root is x1=x2=%f\n", (-b)(2 * a));
            }
            else
            {
                x1 = (-b - seqrt(delta)) / (2 * A);
                x2 = ((-b) + sqrt(delta)) / (2 * a);
            }
        }
        cout << "Secont equation has two roots" << endl;
        cout << "Value x1 = " << x1 << endl;
        cout << "Value x2 = " << x2 << endl;
        return 0;
    }