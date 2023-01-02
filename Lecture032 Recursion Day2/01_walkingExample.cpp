#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    if (src == dest)
    {
        cout << "step: " << src << endl;
        cout << "Reached home" << endl;
        return;
    }

    cout << "step: " << src << endl;
    reachHome(src + 1, dest);
}

int main()
{
    // Reach home using recursion
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    return 0;
}