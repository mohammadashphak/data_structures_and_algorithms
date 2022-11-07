#include <iostream>
#include <limits.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
  // why do we need to pass second dimension?
  // because we need to know how many elements are there in each row
  // so that we can iterate over each row and check if target is present or not.
  // if we don't pass second dimension, then we will get error
  // because we will not be able to iterate over each row
  // https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter

  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {

      if (arr[row][col] == target)
      {
        return 1;
      }
    }
  }
  return 0;
}

// to print row wise sum
void printRowSum(int arr[][3], int row, int col)
{
  cout << "Printing Row Wise Sum -> ";
  for (int row = 0; row < 3; row++)
  {
    int sum = 0;
    for (int col = 0; col < 3; col++)
    {
      sum += arr[row][col];
    }
    cout << sum << " ";
  }

  cout << endl;
}

// to print row wise sum
void printColSum(int arr[][3], int row, int col)
{
  cout << "Printing Column Wise Sum -> ";
  for (int col = 0; col < 3; col++)
  {
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
      sum += arr[row][col];
    }
    cout << sum << " ";
  }

  cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{

  int maxi = INT_MIN;
  int rowIndex = -1;

  for (int row = 0; row < 3; row++)
  {
    int sum = 0;
    for (int col = 0; col < 3; col++)
    {
      sum += arr[row][col];
    }

    if (sum > maxi)
    {
      maxi = sum;
      rowIndex = row;
    }
  }

  cout << "Largest row sum: " << maxi << endl;
  return rowIndex;
}

int main()
{

  // Create a 2D array
  int arr[3][3];

  // Take input -> row wise
  cout << "Enter the elements" << endl;
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      cin >> arr[row][col];
    }
  }

  /*
  // Take input -> col wise
  cout << "Enter the elements" << endl;
  for (int col = 0; col < 4; col++)
  {
    for (int row = 0; row < 3; row++)
    {
      cin >> arr[row][col];
    }
  }
  */

  // Other way of creating a 2D array
  // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
  // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

  cout << "Printing the array " << endl;
  // print
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  // Search in a 2D array
  /*
  int target;
  cout << "Enter the target element" << endl;
  cin >> target;

  if (isPresent(arr, target, 3, 3))
  {
    cout << "Element is present" << endl;
  }
  else
  {
    cout << "Element is not present" << endl;
  }
  */

  // print row wise sum
  printRowSum(arr, 3, 3);

  // print column wise sum
  printColSum(arr, 3, 3);

  // largest row sum
  int rowIndex = largestRowSum(arr, 3, 3);
  cout << "Largest row index: " << rowIndex << endl;

  return 0;
}