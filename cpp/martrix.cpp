// // Name: Dim pathea
// class: M3 year1
//    #include <stdio.h>
// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// void display()
// {
//     cout << "1.Create list of matrix";
//     cout << "\n A. With assing value to array";
//     cout << "\n B. With input form keyboard ";
//     cout << "\n2. Output list of Matrix (A and B) on screen";
//     cout << "\n3. Sum Matrix (Sum = A + B)";
//     cout << "\n4. Moltiple Matrix (Mol = A * B)";
// }

// int main()

// {
//     system("clear");
//     display();

//     int i, j;
//     int ch, Tea;
//     int a[4][4] = {
//         {12, 90, 33, 66},
//         {10, 22, 41, 62},
//         {30, 60, 100, 120},
//         {20, 10, 50, 200},

//     };

//     int b[4][4] = {
//         {12, 30, 23, 56},
//         {10, 23, 45, 67},
//         {10, 20, 30, 40},
//         {40, 50, 60, 70},

//     };
//     do
//     {
//         cout << "\n------- Choose you Tea ---------- : ";
//         cin >> Tea;
//         switch (Tea)
//         {
//         case 1:
//         {
//             cout << "\n2. Output list of maxtrix (a and b) on screen. ";
//             for (i = 0; i < 4; i++)
//             {
//                 for (j = 0; j < 4; j++)
//                 {
//                     // cout << "Enter a \n:";
//                     // cout << a[i][j];
//                     // cout << "Enter b :\n";
//                     // cout << b[j][i] << endl;
//                     cout << a[i][j] << b[j][i] << endl;
//                 }
//             }
//         }
//         break;
//         case 2:
//         {
//             cout << "\n 3. =========Sum Matrix (sum =a+ b)==========.";
//             for (i = 0; i < 4; i++)
//             {
//                 for (j = 0; j < 4; j++)
//                 {
//                     cout << a[i][j] + b[j][i] << endl;
//                 }
//             }
//             break;
//         }
//         case 3:
//         {
//             cout << "\n4. ========Moltiple Matrix (mol =a * b)=========.";
//             for (i = 0; i < 4; i++)
//             {
//                 for (j = 0; j < 4; j++)
//                 {
//                     cout << a[i][j] * b[j][i] << endl;
//                 }
//             }
//             break;
//         }
//         }
//     } while (ch = 'Tea');

//     return 0;
// }
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int r, c, a[100][100], b[100][100], sum[100][100], i, j;

// //     cout << "Enter number of rows (between 1 and 100): ";
// //     cin >> r;

// //     cout << "Enter number of columns (between 1 and 100): ";
// //     cin >> c;

// //     cout << endl
// //          << "Enter elements of 1st matrix: " << endl;

// //     // Storing elements of first matrix entered by user.
// //     for (i = 0; i < r; ++i)
// //         for (j = 0; j < c; ++j)
// //         {
// //             cout << "Enter element a" << i + 1 << j + 1 << " : ";
// //             cin >> a[i][j];
// //         }

// //     // Storing elements of second matrix entered by user.
// //     cout << endl
// //          << "Enter elements of 2nd matrix: " << endl;
// //     for (i = 0; i < r; ++i)
// //         for (j = 0; j < c; ++j)
// //         {
// //             cout << "Enter element b" << i + 1 << j + 1 << " : ";
// //             cin >> b[i][j];
// //         }

// //     // Adding Two matrices
// //     for (i = 0; i < r; ++i)
// //         for (j = 0; j < c; ++j)
// //             sum[i][j] = a[i][j] + b[i][j];

// //     // Displaying the resultant sum matrix.
// //     cout << endl
// //          << "Sum of two matrix is: " << endl;
// //     for (i = 0; i < r; ++i)
// //         for (j = 0; j < c; ++j)
// //         {
// //             cout << sum[i][j] << "  ";
// //             if (j == c - 1)
// //                 cout << endl;
// //         }

// //     return 0;
// // }