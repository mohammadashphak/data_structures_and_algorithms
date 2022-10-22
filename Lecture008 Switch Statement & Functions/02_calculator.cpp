#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Calculator Program using Switch Statement
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Invalid Operator" << endl;
        break;
    }

    return 0;
}