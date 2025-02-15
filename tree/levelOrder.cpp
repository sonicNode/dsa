#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        right = left = NULL;
    }
};
void printLevel(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->left != NULL)
            q.push(curr->right);
    }
}
int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    printLevel(root);
}