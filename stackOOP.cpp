#include <iostream>
using namespace std;

#define s 10

class Stack
{

private:
    int top;
    int arr[s];

public:
    Stack()
    {
        top = -1;
    }
    void push(int element)
    {
        if (top == s - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = element;
            cout << element << " pushed" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            cout << arr[top] << " poped" << endl;
            top--;
        }
    }
    void display()
    {

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{

    Stack sample1;
    sample1.push(5);
    sample1.push(4);
    sample1.push(3);
    sample1.push(2);
    sample1.push(1);
    sample1.push(0);
    sample1.display();
    sample1.pop();
    sample1.pop();
    sample1.pop();
    sample1.display();

    return 0;
}
