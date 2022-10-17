#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // while loop
  /*
  int a = 1;
  while (a <= 10)
  {
    cout << a << endl;
    a++;
  }
  */

  // Program to get sum of first n numbers
  /*
  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int sum = 0;
  int i = 1;

  while (i <= n)
  {
    sum += i;
    i++;
  }
  cout << "The sum of first " << n << " numbers is " << sum << endl;
  */

  // Program to get sum of first n even numbers
  /*
  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  int sum = 0;
  int i = 1;

  while (i <= n)
  {
    sum += 2 * i;
    i++;
  }
  cout << "The sum of first " << n << " even numbers is " << sum << endl;
  */

  // Program to check if a number is prime or composite
	/*
	int n;
	cout << "Enter a number" << endl;
	cin >> n;

	if (n == 1)
	{
		cout << "The number is neither prime nor composite" << endl;
	}
	else
	{
		int i = 2;
		while (i < n)
		{
			if (n % i == 0)
			{
				cout << "The number is composite" << endl;
				break;
			}
			i++;
		}
		if (i == n)
		{
			cout << "The number is prime" << endl;
		}
	}
	*/

  return 0;
}