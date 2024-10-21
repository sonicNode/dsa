#include <iostream>
#include <string.h>
using namespace std;
struct Node
{
    Node *next;
    int data;
    Node() {}
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void print(Node *ptr)
{
    if (ptr->next == NULL)
    {
        cout << ptr->data;
        return;
    }

    cout << ptr->data << " ";
    print(ptr->next);
}
int main()
{
    Node *head = new Node(50);
    Node *temp1 = new Node(60);
    Node *temp2 = new Node(70);
    head->next = temp1;
    temp1->next = temp2;
    // simple method or short method
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(30);
    print(head);
    cout << endl;
    print(first);
    return 0;
}