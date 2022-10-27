#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // break;
                // won't insert because at index 0, it will create problem.
                break;
            }
            j--;
        }
        // copy temp value
        arr[j + 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 12, 11, 20, 5, 8, 9, 3};

    insertionSort(arr, arr.size());

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

// Insertion Sort is a stable sorting algorithm because it only swaps the ordering of any two items if the item on the right is less than the item to its left. Therefore, the ordering of two equivalent items will always be preserved in insertion sort.
*/

// In-place Sorting and Not-in-place Sorting Algorithms
/*
1. In-place Sorting
Sorting algorithms may require some extra space for comparison and temporary storage of few data elements. These algorithms do not require any extra space and sorting is said to happen in-place, or for example, within the array itself. This is called in-place sorting.

2. Not-in-place Sorting
Sorting algorithms which requires space which is more than or equal to the elements being sorted. Sorting which uses equal or more space is called not-in-place sorting. Merge-sort is an example of not-in-place sorting.


// Insertion Sort is an in-place sorting algorithm because it does not require any extra space for sorting. It sorts the elements in the same array itself.
*/

// Adaptive and Non-Adaptive Sorting Algorithms
/*
1. Adaptive Sorting
A sorting algorithm is said to be adaptive, if it takes advantage of already 'sorted' elements in the list that is to be sorted. That is, while sorting if the source list has some element already sorted, adaptive algorithms will take this into account and will try not to re-order them.

2. Non-Adaptive Sorting
A non-adaptive algorithm is one which does not take into account the elements which are already sorted. They try to force every single element to be re-ordered to confirm their sortedness.

// Insertion Sort is an adaptive sorting algorithm because it takes advantage of already sorted elements in the list that is to be sorted. That is, while sorting if the source list has some element already sorted, adaptive algorithms will take this into account and will try not to re-order them.
*/