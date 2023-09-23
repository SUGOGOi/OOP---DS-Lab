#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    void Enqueue(int elem)
    {

        // Node newnodeA;
        // Node *newnode = &newnodeA;
        Node *newnode;
        newnode = new Node;
        newnode->data = elem;
        newnode->next = NULL;

        if (front == NULL)
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode; // rear pointer tur address t juntu node ase , tar "next" t "newnode" r address tu store kora
            rear = newnode;       // rear pointer t "newnode" r address tu store kora
        }
    }

    void Dequeue()
    {
        Node *temp;
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            temp = front;
            front = front->next; // front->next mne front address t juntu node ase tar "next" t thoka address tu
            delete temp;
        }
    }

    void display()
    {
        Node *temp;
        temp = front;

        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next; // temp->next mne temp r address juntu node ase , tar "next" r value tu loise;
        }
        cout << endl;
    }
};

int main()
{

    Queue sampleQueue;

    sampleQueue.Enqueue(10);
    cout << "sampleQueue after 1st enqueue: ";
    sampleQueue.display();
    cout << "\n";
    sampleQueue.Enqueue(20);
    cout << "sampleQueue after 2nd enqueue: ";
    sampleQueue.display();
    cout << "\n";
    sampleQueue.Dequeue();
    cout << "sampleQueue after 1st dequeue: ";
    sampleQueue.display();
    cout << "\n";

    return 0;
}