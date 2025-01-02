#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

class Rectangle
{
private:
    float l, w;

public:
    void showdata();
    Rectangle();
    Rectangle(float x, float y);
    Rectangle(const Rectangle &other);
};

void Rectangle::showdata()
{
    cout << "\tLength =" << l << "\twidth =" << w << endl;
    cout << "Area of reactangl" << (l * w) << endl;
}

Rectangle::Rectangle()
{
    l = 4.5;
    w = 2.5;
}

Rectangle::Rectangle(float x, float y)
{
    l = x;
    w = y;
}

Rectangle::Rectangle(const Rectangle &other)
{
    l = other.l, w = other.w;
}
int main()
{

    int i, n, j;

    cout << "Practice program with constructor " << endl;
    Rectangle obj1;
    cout << "1.Use defoult const other " << endl;
    Rectangle obj2(7.5, 1.5);
    Rectangle obj3(2.5, 0.5);
    cout << "2.Use constructors with parameter " << endl;
    obj2.showdata();
    obj3.showdata();
    Rectangle obj4(obj2);
    cout << "3.Use copy constructor " << endl;
    obj4.showdata();

    return 0;
}

Student object = Student();
object.SetScore(6);
cout << "object output: " << object.GetScore() << endl;