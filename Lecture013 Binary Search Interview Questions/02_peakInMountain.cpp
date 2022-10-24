#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int peakIndexInMountainArray(vector<int> &arr)
	{
		int s = 0, e = arr.size() - 1;
		int mid = (s + e) / 2;
		while (s < e)
		{
			if (arr[mid] < arr[mid + 1])
				s = mid + 1;
			else
				e = mid;

			mid = (s + e) / 2;
		}
		return s;
	}
};

int main(int argc, char const *argv[])
{
	// Peak Index in a Mountain Array
	vector<int> arr = {0, 1, 2, 3, 5, 7, 10, 9, 8, 6, 4, 0};
	int n = arr.size();

	Solution obj;

	cout << "peak index in a mountain array is at index " << obj.peakIndexInMountainArray(arr) << endl;

	return 0;
}