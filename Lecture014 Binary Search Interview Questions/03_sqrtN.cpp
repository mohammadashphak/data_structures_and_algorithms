#include <iostream>
using namespace std;

long int sqrtN(long N)
{
    // Write your code here.
    long s = 0;
    long e = N;
    long ans = -1;
    long mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == N)
            return mid;
        else if (mid * mid < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double precisedSqrtN(long N)
{
    // Write your code here.
    double s = 0;
    double e = N;
    double ans = -1;
    double mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == N)
            return mid;
        else if (mid * mid < N)
        {
            ans = mid;
            s = mid + 0.0000001;
        }
        else
        {
            e = mid - 0.0000001;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    long N;
    cout << "Enter N: ";
    cin >> N;

    cout << precisedSqrtN(N) << endl;
    return 0;
}