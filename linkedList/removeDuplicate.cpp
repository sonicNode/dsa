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
void print(Node *head)
{
    cout << "The content of the \"Linked List\" are: \n";
    if (head == NULL)
        cout << "\"NULL\"\n";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void printList(Node *head)
{
    cout << "The content of the linked list are: \n";
    for (Node *curr = head; curr != NULL; curr = curr->next)
        cout << curr->data << " ";
    cout << endl;
}
Node *push_back(Node *head, int data)
{
    Node *new_node = new Node(data);
    if (head == NULL)
        return new_node;
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = new_node;
        return head;
    }
}
void removeDuplicate(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next->next;
            delete (curr->next);
            curr->next = temp;
        }
        else
            curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = push_back(head, 10);
    push_back(head, 20);
    push_back(head, 30);
    push_back(head, 30);
    push_back(head, 40);
    push_back(head, 40);
    push_back(head, 40);
    push_back(head, 50);
    push_back(head, 50);
    printList(head);
    cout << "After removing duplicates : \n";
    removeDuplicate(head);
    print(head);
    return 0;
}