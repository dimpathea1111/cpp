#include <iostream>
#include <iomanip>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

void update(int &num)
{
    cout << "Before &num = " << num << endl;
    num = 20;
    cout << "After num = " << num << endl;
}
void change(int num)
{
    cout << "Befor num = " << num << endl;
    num = 50;
    cout << "After num = " << num << endl;
}

void swap(int &a, int &b)
{
    int tem = a;
    a = b;
    b = tem;
}
int main()
{
    system("clear");
    int n1 = 5;
    int n2 = 10;

    update(n1);
    cout << "Update n1 = " << &n1 << endl;
    change(n1);
    cout << "Change n1 = " << n1 << endl;

    return 0;
}
