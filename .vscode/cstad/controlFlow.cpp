#include <iostream>

using namespace std;
// decios Making or control statement
// Syntax::if...else
// if(condition){
//     statement
// }

// operator
// <
// >
// <=,
// >=
// ==
// !=

int main()
{
    system("clear");
    // int number=2;
    int number;
    cout << "\n Enter n:";
    cin >> number;
    // if (number != 0 && number > 0 && number==1)
    // if (number != 0 &&number = -1)

    // if (number != 0 || number > 0)
    // {
    //     cout << "This is message from AND operator" << endl;
    // }
    // if (number != 0 && number > 0)
    // {
    //     cout << "Number is greader than 0" << endl;
    // }
    // else
    // {
    //     cout << "Number is greather litle " << endl;
    // }

    // practice2
    // if (number != 0)
    if (number == 0)
    {
        cout << "Numbet is defferent from 0" << endl;
    }
    else if (number > 0)
    {
        cout << "Number is greader than 0" << endl;
    }
    else
    {
        cout << "Number is greader less 0" << endl;
    }

    return 0;
}