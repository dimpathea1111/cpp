// #include <iostream>

// using namespace std;
// void modifyValue(int x)
// {
//     x = 20;
// }

// int main()
// {
//     int a = 10;
//     modifyValue(a);
//     cout << "a: " << a << endl;
//     return 0;
// }
////////////////////////////////


#include <iostream>

using namespace std;

void passByValue(int x)
{
    x = 20;
    cout << "Inside passByValue, x: " << x << endl;
}

void passByReference(int &x)
{
    x = 20;
    cout << "Inside passByReference, x: " << x << endl;
}

int main()
{
    int a = 10;

    
    cout << "Before passByValue, a: " << a << endl;
    passByValue(a); 
    cout << "After passByValue, a: " << a << endl;

    cout << "\nBefore passByReference, a: " << a << endl;
    passByReference(a);
    cout << "After passByReference, a: " << a << endl;

    return 0;
}
