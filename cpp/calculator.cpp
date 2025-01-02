#include <iostream>
#include <string>

using namespace std;

// int main()
// {
//     int num1, num2;
//     cout << "Enter number num1 :";
//     cin >> num1; // 10
//     cout << "Enter number num2 :";
//     cin >> num2; // 30

//     cout << "Total =" << num1 + num2 << endl;
//     cout << "Total =" << num1 - num2 << endl;
//     cout << "Total =" << num1 / num2 << endl;
//     cout << "Total =" << num1 * num2 << endl;
//     cout << "Total =" << num1 % num2 << endl;

//     return 0;
// }
const int ROWS = 3;
const int COLS = 3;

// Function to input a matrix
void inputMatrix(int matrix[][COLS], const char *matrixName)
{
    cout << "Enter elements for matrix " << matrixName << ":\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << matrixName << "[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][COLS], const char *matrixName)
{
    cout << "Matrix " << matrixName << ":\n";
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to sum two matrices
void sumMatrices(int A[][COLS], int B[][COLS], int result[][COLS])
{
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[][COLS], int B[][COLS], int result[][COLS])
{
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < COLS; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[ROWS][COLS], B[ROWS][COLS], Sum[ROWS][COLS], Multiple[ROWS][COLS];

    // Input matrices A and B
    inputMatrix(A, "A");
    inputMatrix(B, "B");

    // Display matrices A and B
    displayMatrix(A, "A");
    displayMatrix(B, "B");

    // Sum matrices A and B
    sumMatrices(A, B, Sum);
    displayMatrix(Sum, "Sum");

    // Multiply matrices A and B
    multiplyMatrices(A, B, Multiple);
    displayMatrix(Multiple, "Multiple");
    return 0;
}
