#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    // base case
    if (nStairs == 0)
        return 1;
    else if (nStairs < 0)
        return 0;

    // recursive case
    int ans = countDistinctWayToClimbStair(nStairs - 1) + countDistinctWayToClimbStair(nStairs - 2);

    return ans;
}

int main()
{
    // Count Ways To Reach The N-th Stairs

    long long nStairs;
    cout << "Enter number of stairs: ";
    cin >> nStairs;

    int ans = countDistinctWayToClimbStair(nStairs);
    cout << "Number of distinct ways to climb " << nStairs << " stairs is " << ans << endl;

    return 0;
}