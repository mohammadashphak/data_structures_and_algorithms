#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &boards, int n, int m, int curr_min)
{
    int painterRequired = 1;
    int lengthSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (lengthSum + boards[i] <= curr_min)
        {
            lengthSum += boards[i];
        }
        else
        {
            painterRequired++;
            lengthSum = boards[i];

            if (painterRequired > m || boards[i] > curr_min)
                return false;
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    long long sum = 0;
    int n = boards.size();

    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }

    long long s = 0;
    long long e = sum;
    long long ans = 0;

    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (isPossible(boards, n, k, mid))
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
    // Painter's Partition Problem
    vector<int> boards = {2,1,5,6,2,3};
    int k = 2;
    cout << findLargestMinDistance(boards, k) << endl;

    return 0;
}