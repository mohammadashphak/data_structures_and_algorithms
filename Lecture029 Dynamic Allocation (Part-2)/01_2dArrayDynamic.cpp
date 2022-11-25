#include <iostream>
using namespace std;

int main()
{
    // Dynamic allocation of 2D arrays
    int row = 2, col = 3;

    // Creating a 2D array
    int **arr = new int *[row]; // array of pointers (for rows)

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // array of integers (for columns)
    }

    // Filling the array
    int val = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }

    // Printing the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocating the array (memory)
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}