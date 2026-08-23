#include <iostream>
using namespace std;

int main()
{
    int queue[7];
    int front = 0;
    int rear = -1;

    // ENQUEUE
    queue[++rear] = 23;
    queue[++rear] = 56;
    queue[++rear] = 67;
    queue[++rear] = 54;

    cout << "Queue after enqueue: " << endl;

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }

    cout << endl;

    // DEQUEUE 2 elements
    cout << "Dequeued: " << queue[front] << endl;
    front++;

    cout << "Dequeued: " << queue[front] << endl;
    front++;

    // Display remaining elements
    cout << "Queue after dequeue: " << endl;

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }

    cout << endl;

    return 0;
}