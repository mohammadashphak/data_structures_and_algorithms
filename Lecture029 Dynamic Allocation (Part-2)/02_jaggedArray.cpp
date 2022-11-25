#include <iostream>
using namespace std;

int main()
{
    // Jagged array (array of arrays)
    /*
    Jagged array is array of arrays such that member arrays can be of different sizes, i.e., we can create a 2-D array but with a variable number of columns in each row. These type of arrays are also known as Jagged arrays.
    */

    // Creating a jagged array
    int row0[3] = {1, 2, 3};
    int row1[4] = {4, 5, 6, 7};
    int row2[2] = {8, 9};

    int *jaggedArray[3] = {row0, row1, row2};

    // Printing the jagged array
    int size[3] = {3, 4, 2}; // size of each row

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }
    // Creating a jagged array using dynamic allocation
    int **arr = new int *[3]; // array of pointers (for rows)

    arr[0] = new int[3]; // array of integers (for columns)
    arr[1] = new int[4]; // array of integers (for columns)
    arr[2] = new int[5]; // array of integers (for columns)

    // Filling the array
    int size2[3] = {3, 4, 5}; // size of each row
    int val = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size2[i]; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }

    // Printing the array
    // int size2[3] = {3, 4, 5}; // size of each row

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size2[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocating the array (memory)
    for (int i = 0; i < 3; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}