#include <iostream>
using namespace std;

void func(int n)
{
    n = 10;
    cout << "Inside func, n = " << n << endl;
}

int main(int argc, char const *argv[])
{
    // pass by value
    int n = 5;
    func(n);

    cout <<"Inside main, n = " << n << endl;

    

    return 0;
}