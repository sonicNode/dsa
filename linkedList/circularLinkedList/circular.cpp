#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void printC(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}
Node *insertAtBegin(Node *head, int data) // Naive implimentation
{
    Node *new_node = new Node(data);
    if (head == NULL)
        new_node->next = new_node;
    else
    {
        Node *curr = head;
        new_node->next = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = new_node;
    }
    return new_node;
}
Node *insertAtBegin1(Node *head, int data) // efficient implimentation
{
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        new_node->next = new_node;
        return new_node;
    }
    new_node->next = head->next;
    head->next = new_node;

    int temp = head->data;
    head->data = new_node->data;
    new_node->data = temp;
    return head;
}
Node *insertAtEnd(Node *head, int data) // naive implimentation
{
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        new_node->next = new_node;
        return new_node;
    }
    Node *curr = head;
    do
    {
        curr = curr->next;
    } while (curr->next != head);
    new_node->next = curr->next;
    curr->next = new_node;
    return head;
}
Node *insertAtEnd1(Node *head, int data) // efficient implimentation
{
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        new_node->next = new_node;
        return new_node;
    }
    new_node->next = head->next;
    head->next = new_node;
    int temp = new_node->data;
    new_node->data = head->data;
    head->data = temp;
    return new_node;
}
Node *deleteHead(Node *head) // naive implimentation
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}
Node *deleteHead1(Node *head) // efficient implimentation
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}
Node *deleteKth(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (head->next == head && k == 1)
    {
        delete head;
        return NULL;
    }
    if (head->next != head && k == 1)
        return deleteHead1(head);
    Node *curr = head;
    for (int i = 0; i < k - 2; i++)
    {
        if (curr->next->next == head)
            return head;
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
Node *deleteAtPosition(Node *head, int pos)
{
    if (head == NULL)
        return NULL;
    if (pos == 1)
        return deleteHead(head);
    Node *curr = head;
    for (int i = 0; i < pos - 2; i++)
    {
        if (curr->next->next == head)
            return head;
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = head;
    // head->next->next = new Node(30);
    // head->next->next->next = head;
    printC(head);
    head = deleteHead1(head);
    printC(head);
    // head = deleteKth(head, 5);
    // printC(head);
    return 0;
}