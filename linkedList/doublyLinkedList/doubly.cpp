#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
void printR(Node *head)
{
    cout << "Content: (Backwards) \n";
    for (Node *curr = head; curr != NULL; curr = curr->prev)
        cout << curr->data << " ";
    cout << endl;
}
void printF(Node *head)
{
    cout << "Content: (Forward)\n";
    if (head == NULL)
        cout << "NULL\n";
    for (Node *curr = head; curr != NULL; curr = curr->next)
        cout << curr->data << " ";
    cout << endl;
}
Node *insertAtBegin(Node *head, int data)
{
    Node *new_node = new Node(data);
    if (head == NULL)
        return new_node;
    new_node->next = head;
    head->prev = new_node;
    return new_node;
}
Node *insertAtEnd(Node *head, int data)
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
    new_node->prev = curr;
    return new_node;
}
Node *reverseDll(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        curr = curr->prev;
    }
    return temp;
}
Node *reverseDll1(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != NULL)
        head = temp->prev;
    return head;
}
Node *deleteHead(Node *head)
{
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    if (head == NULL)
        return NULL;
    Node *temp = head->next;
    delete head;
    temp->prev = NULL;
    return temp;
}
Node *deleteTail(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    Node *temp = curr->prev;
    temp->next = NULL;
    delete curr;
    return head;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    Node *tail = temp2;
    printF(head);
    // head = insertAtBegin(head, 5);
    //  tail = insertAtEnd(head, 35);
    // head = reverseDll1(head);
    head = deleteTail(head);
    printF(head);
    // printR(tail);
    return 0;
}