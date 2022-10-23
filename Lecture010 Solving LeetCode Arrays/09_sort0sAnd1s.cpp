#include <iostream>
#include <vector>
using namespace std;

void sort0sAnd1s(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
    }
}

int main(int argc, char const *argv[])
{
    // Sort 0s and 1s
    vector <int> arr = {0, 1, 0, 1, 1, 1};
    sort0sAnd1s(arr);

    // print the ans
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}