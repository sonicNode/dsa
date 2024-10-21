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
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = new_node;
        return head;
    }
}
Node *reverseList(Node *head)
{
    Node *curr = head;
    Node *prv = NULL;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prv;
        prv = curr;
        curr = next;
    }
    return prv;
}
Node *reverse(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    Node *rest_head = reverse(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}
Node *reverse1(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    return reverse1(next, curr);
}
void printList(Node *head)
{
    cout << "Content of the \"LINK LIST\" are:\n";
    if (head == NULL)
        cout << "\"NULL\"\n";
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
    push_back(head, 30);
    push_back(head, 40);
    push_back(head, 40);
    push_back(head, 50);
    printList(head);
    head = reverseList(head);
    cout << "After reversing: \n";
    printList(head);
    return 0;
}