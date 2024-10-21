#include <iostream>
using namespace std;
struct Node
{
    Node *right;
    Node *left;
    int key;
    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};
void printInorder(Node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    cout << root->key << " ";
    printInorder(root->right);
}
void printPreorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->key << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}
void printPostorder(Node *root)
{
    if (root == NULL)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->key << " ";
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
    cout << "Printing the tree in \"Inorder\" configuration\n";
    printInorder(root);
    cout << endl;
    cout << "Printing the tree in \"Postorder\" configuration\n";
    printPostorder(root);
    cout << endl;
    cout << "Printing the tree in \"Preorder\" configuration\n";
    printPreorder(root);
    cout << endl;
    return 0;
}