#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    // STL priority queue declaration
    // 1. Max heap
    priority_queue <int> pqMax;

    // 2. Min heap
    priority_queue <int, vector<int>, greater<int>> pqMin;

    // Priority queue operations
    // 1. Push elements to priority queue -> will push the element to the priority queue - O(log n)
    pqMax.push(1);
    pqMax.push(3);
    pqMax.push(2);
    pqMax.push(0);

    pqMin.push(1);
    pqMin.push(3);
    pqMin.push(2);
    pqMin.push(0);

    // 2. Size of priority queue -> will give the size of priority queue - O(1)
    cout << "Size of max heap priority queue: " << pqMax.size() << endl;
    cout << "Size of min heap priority queue: " << pqMin.size() << endl;

    // 3. Top element -> will give the top element of the priority queue - O(1)
    cout << "Top element of max heap priority queue: " << pqMax.top() << endl;
    cout << "Top element of min heap priority queue: " << pqMin.top() << endl;

    // 4. Pop elements from priority queue -> will pop the top element from the priority queue - O(log n)
    pqMax.pop();
    cout << "Top element of max heap priority queue: " << pqMax.top() << endl;

    pqMin.pop();
    cout << "Top element of min heap priority queue: " << pqMin.top() << endl;

    // 5. Check if priority queue is empty -> will check if the priority queue is empty - O(1)
    cout << "Is max heap priority queue empty? " << pqMax.empty() << endl;
    cout << "Is min heap priority queue empty? " << pqMin.empty() << endl;

    return 0;
}