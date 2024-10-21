#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
        return 0;
    return (1 + max(height(root->right), height(root->left)));
}

int main()
{
    Node *root = new Node(10);
    root->right = new Node(30);
    root->left = new Node(20);
    root->right->right = new Node(60);
    root->left->right = new Node(50);
    root->left->left = new Node(40);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);
    cout << "Printing the tree height at\n";
    cout << height(root);
    cout << endl;
    return 0;
}