// #include <iostream>
// using namespace std;

// int main()
// {
//     int number[] = {-100, -200, -2, 1, 0};
//     cout << "Sort arry" << endl;
//     int i, j, temp;
//     int length = sizeof(number) / sizeof(number[0]);
//     for (i = 0; i < length; i++)
//     {
//         for (j = i + 1; j < 5; j++)
//         {
//             if (number[i] > number[i + 1])
//             {
//                 temp = number[i];
//                 number[i] = number[i + 1];
//                 number[i + 1] = temp;
//             }
//         }
//     }
//     cout << "Sorted array in ascending order :";
//     for (i = 0; i < length; i++)
//     {
//         cout << number[i];
//     }
//     return 0;
// }

/*
for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            temp = number[i];
            number[i] = number[j];
            number[j] = temp;
        }
    }*/
/*
#include <iostream>
#include <algorithm> // for std::sort

int main()
{
    std::string str[] = {"A", "b", "a", "c", "C", "B"};
    int size = sizeof(str) / sizeof(str[0]); // Calculate the number of elements in the array

    // Sort the array in ascending order using std::sort
    std::sort(str, str + size);

    // Print the sorted names
    std::cout << "Sorted names:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << str[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int number[] = {-200, -500, 10, 20, -20, 90, -800, -2}; //
    int length = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < length; i++)
    {
        cout << number[i] << " ";
    }
    return 0;
}