// #include <iostream>
// using namespace std;
// void modifyReference(int &x)
// {
//     x = 20;
// }

// int main()
// {
//     int a = 10;
//     modifyReference(a);
//     cout << "a: " << a << endl;
//     return 0;
// }
///////////////////////////////////////////////

// #include <iostream>

// using namespace std;

// void reference(int &i, int &j)
// {

//     i = 30;
//     j = 40;
// }

// int main(void)
// {
//     int a = 10;
//     int b = 20;

//     reference(a, b);
//     cout << "A is: " << a << "\t B is :" << b;
//     return 0;
// }

////////////////////////////////

#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 2
// pass by reference
void fromUSACurreny(double &cash)
{
    // void fromUSACurreny(double *cash){
    cout << "Result of Exchange of " << cash << "$ " << cash * 400 << "Riel" << endl;
}

int main()
{
    // 1
    // assign new value &b= a, b&=y;
    int x = 3, y = 6;
    cout << "X :" << x << endl;
    cout << "Y :" << y << endl;
    cout << " x*y :" << x * y << endl;
    // 2
    double dollarBalance = 50;
    cout << "My bank accound in dollar :" << dollarBalance << "$" << endl;
    fromUSACurreny(dollarBalance);
    cout << "After exchange to KH corrency " << endl;
    cout << "My bank accoun in dollar :" << dollarBalance << endl;

    return 0;
}