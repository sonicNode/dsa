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
void printList(Node *head)
{
    cout << "The elements of the list are: \n";
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
void printMiddle(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << slow->data << endl;
}
void printNLast(Node *head, int n)
{
    int len = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
        len++;
    }
    if (n > len)
        cout << "Not possible MF :(\n";

    Node *temp = head;
    for (int i = 1; i < len - n + 1; i++)
        temp = temp->next;
    cout << temp->data;
}
void printNthFromLast(Node *head, int n)
{
    Node *first = head, *second = head;
    int i = 1;
    while (i <= n && second != NULL)
    {
        second = second->next;
        i++;
    }

    if (second == NULL)
    {
        if (i <= n)
            cout << "Not possible:( ";
        else
            cout << first->data << endl;
    }
    else
    {
        while (second != NULL)
        {
            second = second->next;
            first = first->next;
        }
        cout << first->data << endl;
    }
}
int main()
{
    Node *head = NULL;
    head = push_back(head, 10);
    push_back(head, 20);
    push_back(head, 30);
    push_back(head, 40);
    push_back(head, 50);
    push_back(head, 60);
    printList(head);

    printNthFromLast(head, 1);

    return 0;
}