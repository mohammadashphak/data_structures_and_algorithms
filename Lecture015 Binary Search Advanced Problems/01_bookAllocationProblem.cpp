#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &books, int n, int m, int curr_min)
{
    int studentsRequired = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + books[i] <= curr_min)
        {
            pageSum += books[i];
        }
        else
        {
            studentsRequired++;
            pageSum = books[i];

            if (studentsRequired > m || books[i] > curr_min)
                return false;
        }
    }
    return true;
}

long long bookAllocate(int n, int m, vector<int> arr)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    long long s = 0;
    long long e = sum;
    long long ans = 0;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // Allocate Books
    vector<int> arr = {60, 10, 20, 10};
    int n = arr.size();
    int m = 2;
    cout << bookAllocate(n, m, arr) << endl;
    return 0;
}