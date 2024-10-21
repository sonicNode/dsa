#include <iostream>
#include <algorithm>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node() {}
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *insertEnd(Node *head, int data)
{
    Node *start = head;
    Node *new_node = new Node(data);
    if (head == NULL)
        return new_node;
    else
    {
        while (head->next != NULL)
        {
            head = head->next;
        }
        head->next = new_node;
        return start;
    }
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int searchList(Node *head, int key)
{
    int index = 1;
    while (head != NULL)
    {
        if (head->data == key)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}
void insertBegin(Node *&head, int data) // pointer of reference
{
    Node *new_head = new Node(data);
    new_head->next = head;
    head = new_head;
}
Node *insertBeginList(Node *head, int data)
{
    Node *new_node = new Node(data);
    new_node->next = head;
    return new_node;
}
int main()
{
    Node *head = NULL;

    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);

    // printList(head);

    // cout << endl
    //      << "20 " << "Found at " << searchList(head, 20) << endl;

    // insertBegin(head, 5);
    //  head = insertBeginList(head, 2);

    head = insertEnd(head, 80);
    head = insertEnd(head, 90);
    head = insertEnd(head, 100);
    printList(head);
    // cout << endl
    //      << "20 " << "Found at " << searchList(head, 20) << endl;
    return 0;
}