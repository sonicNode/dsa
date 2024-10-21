#include <iostream>
#include <limits.h>
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
struct Stack
{
    Node *head;
    int sz;
    Stack()
    {
        head = NULL;
        sz = 0;
    }
    void push(int data)
    {
        Node *new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        sz++;
    }
    int pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty\n";
            return INT_MIN;
        }
        else
        {
            int res = head->data;
            Node *temp = head->next;
            delete head;
            head = temp;
            sz--;
            return res;
        }
    }
    int size()
    {
        return sz;
    }
    int peek()
    {
        if (head == NULL)
            return INT_MIN;
        else
            return head->data;
    }
    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}