#include <iostream>
using namespace std;
struct Node
{
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *push_back(Node *head, int data)
{
    Node *new_node = new Node(data);
    if (head == NULL)
        return new_node;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new_node;
    return head;
}
Node *insertSorted(Node *head, int data)
{
    Node *new_node = new Node(data);
    Node *curr = head;
    if (head == NULL)
        return new_node;
    if ((head->data) > data)
    {
        new_node->next = head;
        return new_node;
    }
    while (curr->next != NULL && (curr->next->data) < data)
    {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    return head;
}
void printList(Node *head)
{
    cout << "The elements of the Linked List is following: \n";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    head = push_back(head, 10);
    push_back(head, 20);
    push_back(head, 30);
    push_back(head, 40);
    push_back(head, 50);
    printList(head);
    head = insertSorted(head, 55);
    printList(head);
    return 0;
}