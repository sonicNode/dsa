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
        curr = curr->next;
    curr->next = new_node;
    return head;
}
void printList(Node *head)
{
    cout << "The elements in the list: \n";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node *insertIndex(Node *head, int data, int index)
{
    Node *new_node = new Node(data);
    if (head == NULL && index == 1)
        return new_node;
    else if (index == 1)
    {
        new_node->next = head;
        return new_node;
    }
    int cnt = 1;
    Node *curr = head;
    while (curr->next != NULL && cnt < index - 1)
    {
        curr = curr->next;
        cnt++;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    return head;
}
Node *insertAtIndex(Node *head, int data, int index)
{
    Node *new_node = new Node(data);
    if (head == NULL && index == 1)
        return new_node;
    else if (index == 1)
    {
        new_node->next = head;
        return new_node;
    }
    Node *curr = head;
    for (int i = 1; i < index - 1; i++)
    {
        curr = curr->next;
        if (curr == NULL)
        {
            cout << "Out of bound :(\n";
            return head;
        }
    }
    new_node->next = curr->next;
    curr->next = new_node;
    return head;
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
    push_back(head, 70);
    printList(head);
    head = insertAtIndex(head, 80, 9);
    printList(head);
    return 0;
}
