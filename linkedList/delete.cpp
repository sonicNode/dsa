#include <iostream>
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
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node *deleteFirst(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    delete head;
    head = temp->next;
    return head;
}
Node *deleteEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete (temp->next);
        temp->next = NULL;
        return head;
    }
}
int main()
{
    Node *head = new Node(90);
    head->next = new Node(80);
    head->next->next = new Node(70);
    //  head->next->next->next = new Node(60);
    printList(head);
    head = deleteFirst(head);
    cout << "After deleting the first \n";
    printList(head);
    head = deleteEnd(head);
    cout << "after deleting last \n";
    printList(head);
    return 0;
}