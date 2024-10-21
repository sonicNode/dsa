#include <iostream>
#include <stack>
using namespace std;
struct Node
{
    int data;
    Node *right;
    Node *left;
    Node(int data)
    {
        this->data = data;
        right = left = NULL;
    }
};
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;

    while (s.empty() == false || curr != NULL)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";

        curr = curr->right;
    }
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
    inOrder(root);
    cout << endl;
    return 0;
}