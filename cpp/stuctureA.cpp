#include <stdio.h>
#include <iostream>
// #include<cmath>

using namespace std;

struct Rectengle
{
    float length;
    float width;
};

int main()
{

    cout << "\n practice : Structur of array";
    cout << "=================================";
    int n, i;
    float A[100];

    cout << "\n\t1. Create list of (Rectengle or Student)" << endl;
    cout << "\n\t\t2. Assign s record to Rectengle " << endl;

    struct Rectengle Rec[5]{
        {4.5, 2.5}, {9.5, 6.0}, {9.32, 0.5}, {7.5, 5.0}, {3.57, 1.5}
        // {2.2, 3.4}, {3.2, 5.3}, {7.6, 5.3}, {1.3, 4.9}, {4.6, 7.9}
    };

    cout << "\n Output list of Rectengle on sreen:" << endl;
    cout << "\n======================================" << endl;
    cout << "\n\tlength \twidth\tArea\n";
    for (i = 0; i < 5; i++)
    {
        cout << "\t" << Rec[i].length << "\t" << Rec[i].width;
        cout << "\t" << (Rec[i].length * Rec[i].width) << endl;
    }
    printf("\nB. Input list of Rectangle form keyboad");
    float Area[100];
    struct Rectangle a[100];
    printf("\n Enter n=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter recorde[%d]", i);
        printf("\n Input Length =");
        scanf("%f", &a[i].length);
        printf("\nInput Width =");
        scanf("%f", &a[i].width);
    }

    cout << "\nOutput list of Rectangle on sreen:" << endl;
    cout << "\n ===================================" << endl;
    cout << "\n \tlength\twidth\tArea\n";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << a[i].length << "\t" << a[i].width;
        cout << "\t" << Area[i] << endl;
    }
    printf("\n...please continue practice with structur ....");

    return (0);
}