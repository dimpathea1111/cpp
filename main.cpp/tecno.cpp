#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main()
{
    system("clear");
    // cout << "Practice TECNO university" << endl;
    // cout << "1. --------------------------------" << endl;
    // char studentName[50], courseName[50];
    // cout << "\nEnter studentNAme :";
    // cin >> studentName;
    // cout << "\nEnter coursName :";
    // cin >> courseName;
    // cout << "\nstudentName :" << studentName;
    // cout << "\ncoursName :" << courseName;
    // cout << "\n2.++++++++++++++++++++++++"<<endl;

    char input[100], uppercase[100], lowercase[100];

    // cout << "Enter a Word :";
    // fgets(input, sizeof(input), stdin);
    // input[strcspn(input, "\n")] = 0; // Remove newline character

    // // Convert to uppercase
    // for (int i = 0; input[i] != '\0'; i++)
    // {
    //     uppercase[i] = (input[i]);
    // }
    // uppercase[strlen(input)] = '\0';

    // // Convert to lowercase
    // for (int i = 0; input[i] != '\0'; i++)
    // {
    //     // lowercase[i] = tolower(input[i]);
    //     lowercase[i] = (input[i]);
    // }
    // lowercase[strlen(input)] = '\0';

    // cout << "\nUpercase :" << uppercase;
    // cout << "\nLowercase :" << lowercase;

    // cout << "\n3.+++++++++++++++++++" << endl;
    // // float input[100];
    // cout << "Enter a word :" << endl;
    // fgets(input, sizeof(input), stdin);
    // input[strcspn(input, "\n")] = 0;
    // int length = strlen(input);
    // cout << "\nThe length of the word:" << input << length;

    cout << "\n4.+++++++++++++++++++++++++++" << endl;
    cout << "\nEnter a word :";
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    char first = input[0];
    char last = input[strlen(input) - 1];
    cout << "\nIn word the first character is and the last character is \n"
         << input << first << last;
    return 0;
}