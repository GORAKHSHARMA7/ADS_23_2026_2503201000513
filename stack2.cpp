#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node(int value)
    {
        data = value;
        link = NULL;
    }
};

Node *top = NULL;

// Check if stack is empty
bool isEmpty()
{
    return (top == NULL);
}

// Push operation
void push(int value)
{
    Node *ptr = new Node(value);

    ptr->link = top;
    top = ptr;

    cout << value << " pushed into the stack." << endl;
}

// Pop operation
void pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow!" << endl;
        return;
    }

    Node *temp = top;
    cout << top->data << " popped from the stack." << endl;
    top = top->link;
    delete temp;
}

// Peek operation
void peek()
{
    if (isEmpty())
    {
        cout << "Stack is Empty!" << endl;
        return;
    }

    cout << "Top Element = " << top->data << endl;
}

// Display stack
void display()
{
    if (isEmpty())
    {
        cout << "Stack is Empty!" << endl;
        return;
    }

    Node *temp = top;

    cout << "Stack Elements: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}