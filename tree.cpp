#include <iostream>
#include<queue>
using namespace std;

class Node 
{
    public:
        int data;
        Node *left;
        Node *right;
    
    Node()
    {
        data=0;
        left=nullptr;
        right=nullptr;
    }

    Node(int data) 
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree 
{
    public:
        Node *root;

    BinaryTree() 
    {
        root = nullptr;
    }

    Node* insert(int a);
    void print();
    
    private:
        void inorder(Node *node) 
        {
            if (node == NULL)
                return;
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
};
Node* BinaryTree :: insert(int a)
{
    if (root == nullptr) 
    {
        root =  new Node(a);
        return root;
    }

    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) 
    {
        Node* temp = q.front();
        q.pop();
 
        if (temp->left != nullptr)
            q.push(temp->left);
        else 
        {
            temp->left = new Node(a);
            return root;
        }
 
        if (temp->right != nullptr)
            q.push(temp->right);
        else 
        {
            temp->right = new Node(a);
            return root;
        }
    }
    return root;
} 
void BinaryTree :: print()
{
    inorder(root);
} 

int main() 
{
  BinaryTree tree;

  tree.insert(5);
  tree.insert(3);
  tree.insert(7);
  cout<<"tree-->>";
  tree.print();
  cout<<endl;
  tree.insert(4);
  cout<<"inserting 4---->";
  tree.print();
  cout<<endl;
  return 0;
}