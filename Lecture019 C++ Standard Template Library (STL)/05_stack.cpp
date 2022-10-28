#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL stack declaration
    stack<int> s;

    // Stack operations
    // 1. Push elements to stack -> will push the element to the top of the stack - O(1)
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // 2. Size of stack -> will give the size of stack - O(1)
    cout << "Size of stack: " << s.size() << endl;

    // 3. Top element -> will give the top element of the stack - O(1)
    cout << "Top element: " << s.top() << endl;

    // 4. Pop elements from stack -> will pop the top element from the stack - O(1)
    s.pop();
    cout << "Top element: " << s.top() << endl;

    // 5. Check if stack is empty -> will check if the stack is empty - O(1)
    cout << "Is stack empty? " << s.empty() << endl;

    return 0;
}