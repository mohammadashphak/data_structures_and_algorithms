#include <iostream>
#include <vector>
using namespace std;

void sort0s1sAnd2s(vector<int> &arr)
{
    int i = 0;
    int j = 0;
    int k = arr.size() - 1;
    while (j<= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else if (arr[j] == 2)
        {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main(int argc, char const *argv[])
{
    // Sort 0s, 1s and 2s
    vector <int> arr = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    sort0s1sAnd2s(arr);

    // print the ans
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}