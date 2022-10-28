#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL queue declaration
    queue<int> q;

    // Queue operations
    // 1. Push elements to queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // 2. Size of queue -> will give the size of queue - O(1)
    cout << "Size of queue: " << q.size() << endl;

    // 3. Front element -> will give the front element of the queue - O(1)
    cout << "Front element: " << q.front() << endl;

    // 4. Back element -> will give the back element of the queue - O(1)
    cout << "Back element: " << q.back() << endl;

    // 5. Pop elements from queue -> will pop the front element from the queue - O(1)
    q.pop();
    cout << "Front element: " << q.front() << endl;

    // 6. Check if queue is empty -> will check if the queue is empty - O(1)
    cout << "Is queue empty? " << q.empty() << endl;

    return 0;
}