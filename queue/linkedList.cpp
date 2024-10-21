#include <iostream>
using namespace std;
struct queueNode
{
    queueNode *next;
    int data;
    queueNode(int data)
    {
        this->data = data;
        next = NULL;
    }
};
struct queue
{
    queueNode *front, *rear;
    queue() { front = rear = NULL; }
    void enQueue(int data)
    {
        queueNode *new_node = new queueNode(data);
        if (front == NULL)
        {
            front = new_node;
            rear = new_node;
        }
        else
        {
            rear->next = new_node;
            rear = new_node;
        }
    }
    void deQueue()
    {
        if (front == NULL)
        {
            cout << "queue is empty\n";
            return;
        }
        else
        {
            queueNode *temp = front;
            front = front->next;
            if (front == NULL)
                rear = NULL;
            delete temp;
        }
    }
    void getFront()
    {
        if (front == NULL)
            cout << "NULL\n";
        else
            cout << front->data << endl;
    }
    void getRear()
    {
        if (rear == NULL)
            cout << "NULL\n";
        else
            cout << rear->data << endl;
    }
};
int main()
{
    queue q;
    q.enQueue(10);
    q.deQueue();
    q.enQueue(20);
    q.enQueue(30);
    q.getFront();
    q.getRear();
    return 0;
}