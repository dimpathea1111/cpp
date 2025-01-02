// #include <iostream>

// using namespace std;
// function rerurn-type with parameter

// double khCurrenConvetor(double usd)
// {
//     // double result = usd*4000;
//     return usd * 4000;
// }
// double convetorFormToUSD(double khCurrency)
// {
//     return khCurrency / 4000;
// }

// int main()
// {
//     system("cls");
//     double result = khCurrenConvetor(1.5);
//     cout << "Result of curren covenvetor : " << result << endl;
//     double result1 = convetorFormToUSD(600000);
//     cout << "600000 to USD currency conversion :$" << result1 << endl;
//     return 0;
// }

///////////////////////////////////////////////////
// function rerurn-type no parameter
// #include <iostream>

// using namespace std;
// // string generateString(){}
// char buffer;
// string generatePassword()
// {
//     string str = "";

//     for (int i = 0; i < 10; i++)
//     {
//         str = str + buffer;
//         buffer++;
//     }
// }

// int main()
// {
//     system("cls");
//     string myPassword = generatePassword();
//     cout << "This is my password :" << myPassword << endl;
//     return 0;
// }

////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;
void thumbnail(string yourProfileName)
{
    cout << "-----------------------------------" << endl;
    cout << "=> Welcome   " << yourProfileName << endl;
    cout << "-----------------------------------" << endl;
}
void greeting()
{
    cout << "Greeting!" << endl;
    cout << "How can i help you ?" << endl;
}
int main()
{
    thumbnail("gojo");
    greeting();

    return 0;
}