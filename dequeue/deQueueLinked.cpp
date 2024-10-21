#include <iostream>
#include <limits.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = prev = NULL;
    }
};
class deQueue
{
private:
    Node *head;
    Node *tail;

public:
    deQueue() { head = tail = NULL; }

    void insertRear(int value)
    {
        Node *new_node = new Node(value);
        if (tail == NULL)
            head = tail = new_node;
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }
    int getRear()
    {
        if (tail == NULL)
            return INT_MIN;
        return tail->data;
    }
    void deleteRear()
    {
        if (tail == NULL)
        {
            cout << "Empty deQueue:\n";
            return;
        }
        else if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
    }
    void insertFront(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
            head = tail = new_node;
        else
        {
            new_node->next = head;
            head->prev = new_node;
            // tail = head;
            head = new_node;
        }
    }
    int getFront()
    {
        if (head == NULL)
            return INT_MIN;
        else
            return head->data;
    }
    void deleteFront()
    {
        if (head == NULL)
            cout << "Dequeue is empty:\n";
        else if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head->next;
            temp->prev = NULL;
            head = temp;
            delete temp;
        }
    }
    void print()
    {
        if (head == NULL)
            cout << "NULL";
        else
        {
            cout << "forward->\n";
            for (Node *curr = head; curr != NULL; curr = curr->next)
                cout << curr->data << " ";
            cout << endl;
            Node *curr = tail;
            cout << "backward->\n";
            while (curr != NULL)
            {
                cout << curr->data << " ";
                curr = curr->prev;
            }
        }
    }
};
int main()
{
    deQueue dq;

    // Function calls
    cout
        << "Insert element at rear end : 5 \n";
    dq.insertRear(5);

    cout << "insert element at rear end : 10 \n";
    dq.insertRear(10);

    cout << "get rear element "
         << " " << dq.getRear() << endl;

    dq.deleteRear();
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;

    cout << "inserting element at front end \n";
    dq.insertFront(15);
    cout << "inserting element at front end \n";
    dq.insertFront(20);
    cout << "inserting element at front end \n";
    dq.insertFront(25);
    cout << "inserting element at front end \n";
    dq.insertFront(30);

    cout << "insert element at rear end : 10 \n";
    dq.insertRear(10);

    cout << "get rear element "
         << " " << dq.getRear() << endl;

    dq.deleteRear();

    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;
    cout << "get front element "
         << " " << dq.getFront() << endl;

    dq.deleteFront();

    cout << "After delete front element new "
         << "front become " << dq.getFront() << endl;

    dq.print();
    return 0;
}