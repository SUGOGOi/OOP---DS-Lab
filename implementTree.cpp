#include <iostream>
using namespace std;

class Node
{
public:
    Node *leftLink;
    int Data;
    Node *rightLink;
};

class Tree
{
    Node *root;

public:
    Tree() { root = NULL; }
    Node *newNode(int);
    int insertNode(int);
    void print();
};

int Tree::insertNode(int a){

};

// Node Tree::newNode(int a){

// }

int main()
{

    return 0;
}