#include <iostream>

// template <typename P>

using namespace std;
// void integerSum(int a, int b){
//     cout<<"Sum of intrger :"<<a+b<<endl;
// }

template <typename P>
void sum(P a, P b)
{
    cout << "Sum result :" << a + b << endl;
}

int main()
{
    system("cls");
    sum(2.9, 9.4);
    sum(8, 9);
    sum(2 / 4, 9 / 3);
    sum(2 * 4, 9 * 1);
    // sum("po", "lo");
    sum("A", "B");
    return 0;
}