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
        right = left = NULL;
    }
};
void printAtK(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << " ";
    printAtK(root->left, k - 1);
    printAtK(root->right, k - 1);
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
    cout << "Printing the tree at K nodes\n";
    printAtK(root, 3);
    cout << endl;
    return 0;
}