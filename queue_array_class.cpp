#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int capacity;
    int front;
    int rear;

    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = rear = 0;
    }

    void enQueue(int element);
    void deQueue();
    void display();
    bool isFull();
    bool isEmpty();
};

bool Queue::isFull()
{
    if (rear == (capacity - 1)) // && front ==0
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::enQueue(int element)
{
    if (isFull())
    {
        cout << "Queue Overflow" << endl;
    }
    else
    {

        arr[rear] = element;
        rear++;
    }
}

void Queue::deQueue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        arr[front] = 0;
        front++;
        if (front == rear)
        {
            rear = front = 0;
        }
    }
}

void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue underflow" << endl;
    }
    for (int i = front; i < rear; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int capacity;
    int choice;
    int element;

    cout << endl;
    cout << "-------------------****DYNAMIC QUEUE****-----------------" << endl;
    cout << endl;
    cout << "Enter capacity of your Queue :   ";
    cin >> capacity;
    cout << endl;

    Queue q1(capacity);

    while (choice != 4)
    {
        cout << "Enter your choice: " << endl;
        cout << "1. EnQueue an element" << endl;
        cout << "2. DnQueue an element" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Exit!" << endl;
        cout << "choice: ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Eneter element: ";
            cin >> element;
            q1.enQueue(element);
            cout << element << "  enQueue done!" << endl;
            break;
        case 2:
            q1.deQueue();
            cout << "deQueue done!" << endl;
            break;
        case 3:
            cout << "Queue's Elements are : ";
            q1.display();
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }
    };

    return 0;
}