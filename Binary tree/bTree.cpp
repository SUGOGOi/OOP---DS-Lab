#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "ENter data for left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void

    int
    main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    return 0;
}
