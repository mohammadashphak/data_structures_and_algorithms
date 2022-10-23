#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];   
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 1, 2,4, 2, 3, 3};
    cout << findUnique(arr, 7) << endl;
    return 0;
}