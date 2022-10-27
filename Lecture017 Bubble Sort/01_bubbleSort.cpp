#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    // Bubble Sort
    vector<int> arr = {6, -2, 8, 2000000, 3, 7, 2, 10, 9, 8, 1, 2, 11, 15, 12, 10, 10, 8, 0, -1};

    bubbleSort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Stable and Not Stable Sorting Algorithms
/*
1. Stable Sorting
If a sorting algorithm, after sorting the contents, does not change the sequence of similar content in which they appear, it is called stable sorting.

2. Unstable Sorting
If a sorting algorithm, after sorting the contents, changes the sequence of similar content in which they appear, it is called unstable sorting.

// Stability of an algorithm matters when we wish to maintain the sequence of original elements, like in a tuple for example.

// Bubble Sort is a stable sorting algorithm because it swaps elements only when A is less than B. If A is equal to B, we do not swap them, hence relative order between equal elements will be maintained.
*/

// In-place Sorting and Not-in-place Sorting Algorithms
/*
1. In-place Sorting
Sorting algorithms may require some extra space for comparison and temporary storage of few data elements. These algorithms do not require any extra space and sorting is said to happen in-place, or for example, within the array itself. This is called in-place sorting.

2. Not-in-place Sorting
Sorting algorithms which requires space which is more than or equal to the elements being sorted. Sorting which uses equal or more space is called not-in-place sorting. Merge-sort is an example of not-in-place sorting.


// Bubble Sort is an in-place sorting algorithm because it does not require any extra space for sorting. It sorts the elements in the same array itself.
*/

// Adaptive and Non-Adaptive Sorting Algorithms
/*
1. Adaptive Sorting
A sorting algorithm is said to be adaptive, if it takes advantage of already 'sorted' elements in the list that is to be sorted. That is, while sorting if the source list has some element already sorted, adaptive algorithms will take this into account and will try not to re-order them.

2. Non-Adaptive Sorting
A non-adaptive algorithm is one which does not take into account the elements which are already sorted. They try to force every single element to be re-ordered to confirm their sortedness.

// Bubble Sort is an adaptive sorting algorithm because it takes advantage of already sorted elements. If the array is already sorted, it will not swap any elements and will break out of the loop.
*/