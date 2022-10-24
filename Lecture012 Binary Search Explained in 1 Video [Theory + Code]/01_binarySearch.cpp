#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2; // this can cause overflow for large numbers of start and end
        int mid = start + (end - start) / 2; // this is the correct way to calculate mid

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    // Binary Search
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 6, 8);
    cout << "Index of 8 in even array is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 7);
    cout << "Index of 7 in odd array is " << oddIndex << endl;

    // Time Complexity of Binary Search
    /*
    O(log n)

    How to calculate time complexity of binary search?
    1. At Iteration 1:
    Length of array = n

    2. At Iteration 2:
    Length of array = n/2

    3. At Iteration 3:
    Length of array = (n/2)/2 = n/2^2

    4. Therefore, after Iteration k:
    Length of array = n/2^k

    Also, we know that after k iterations, the length of the array becomes 1 Therefore, the Length of the array
    n/(2^k) = 1
    => n = 2^k
    Applying log function on both sides:

    => log2(n) = log2(2^k)

    => log2(n) = k * log2(2)

    As (loga(a) = 1) Therefore, k = log2(n)
    */

    return 0;
}