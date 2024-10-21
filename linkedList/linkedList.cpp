#include <iostream>

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
void print(Node *ptr) // recursive method
{
    if (ptr == NULL)
        return;
    cout << ptr->data << " ";
    print(ptr->next);
}
void printList(Node *Head)
{
    // Node *current = Head;
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
}
int searchList(Node *Head, int key)
{

    if (Head == NULL)
        return -1;
    if (Head->data == key)
        return 1;
    else
    {
        int res = searchList(Head->next, key);
        if (res == -1)
            return -1;
        return res + 1;
    }
}
// int searchList(Node *head, int key)
// {
//     int index = 0;
//     while (head != NULL)
//     {
//         if (head->data == key)
//             return index;
//         head = head->next;
//         index++;
//     }
//     return -1;
// }
int main()
{
    Node *head = new Node(50);
    Node *temp1 = new Node(60);
    Node *temp2 = new Node(70);
    head->next = temp1;
    temp1->next = temp2;
    // simple method or short method
    // Node *first = new Node(10);
    // first->next = new Node(20);
    // first->next->next = new Node(30);
    printList(head);
    cout << endl;
    cout << searchList(head, 60) << endl;
    cout << searchList(head, 70);
    //  print(first);
    //  cout << endl;
    //  printList(head);
    return 0;
}