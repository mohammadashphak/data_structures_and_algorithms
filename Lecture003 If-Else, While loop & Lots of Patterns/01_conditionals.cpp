#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// Conditionals
	/*
	int a = 10;
	int b = 20;

	if (a > b)
	{
		cout << "a is greater than b" << endl;
	}
	else if (a < b)
	{
		cout << "a is less than b" << endl;
	}
	else
	{
		cout << "a is equal to b" << endl;
	}
	*/

	// cin Rules
	/*
	int a;
	cout << "Enter a number" << endl;
	cin >> a;
	cout << "You entered " << a << endl;

	// cin does not take input of more than one word
	// cin does not take input of space, tab, newline, special characters etc.
	*/

	// Conditionals using cin
	/*
	int a;
	cout << "Enter a number" << endl;
	cin >> a;

	if (a > 0)
	{
		cout << "The number is positive" << endl;
	}
	else
	{
		if (a < 0)
		{
			cout << "The number is negative" << endl;
		}
		else
		{
			cout << "The number is zero" << endl;
		}
	}
	*/

	// Program to check which number is greater
	/*
	int a, b;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;

	if (a > b)
	{
		cout << "The greater number is " << a << endl;
	}
	else if (a < b)
	{
		cout << "The greater number is " << b << endl;
	}
	else
	{
		cout << "The numbers are equal" << endl;
	}
	*/

	// Practice Problem
	/*
	int a = 2;
	int b = a + 1;

	if ((a = 3) == b)
	{
		cout << a;
	}
	else
	{
		cout << a + 1;
	}
	*/

	// Program to check if a character is uppercase, lowecase or numeric
	/*
	char c;
	cout << "Enter a character" << endl;
	cin >> c;

	if (c >= 'A' && c <= 'Z')
	{
		cout << "The character is uppercase" << endl;
	}
	else if (c >= 'a' && c <= 'z')
	{
		cout << "The character is lowercase" << endl;
	}
	else if (c >= '0' && c <= '9')
	{
		cout << "The character is numeric" << endl;
	}
	else
	{
		cout << "The character is special" << endl;
	}
	*/

	return 0;
}