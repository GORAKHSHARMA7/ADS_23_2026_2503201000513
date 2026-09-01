#include <iostream>
using namespace std;

#define SIZE 5

int pq[SIZE];
int n = 0;

void enqueue(int value)
{
    if (n == SIZE)
    {
        cout << "Priority Queue is Full\n";
        return;
    }

    int i = n - 1;

    // Shift larger elements to the right
    while (i >= 0 && pq[i] > value)
    {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1] = value;
    n++;
}

void dequeue()
{
    if (n == 0)
    {
        cout << "Priority Queue is Empty\n";
        return;
    }

    cout << "Deleted: " << pq[0] << endl;

    for (int i = 0; i < n - 1; i++)
        pq[i] = pq[i + 1];

    n--;
}

void display()
{
    for (int i = 0; i < n; i++)
        cout << pq[i] << " ";

    cout << endl;
}

int main()
{
    enqueue(40);
    enqueue(10);
    enqueue(30);
    enqueue(20);
    enqueue(50);

    cout << "Priority Queue in Ascending Order: ";
    display();

    dequeue();

    cout << "After Deletion: ";
    display();

    return 0;
}