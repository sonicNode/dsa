#include <iostream>
using namespace std;
class Dequeue
{
private:
    int cap, front, size;
    int *arr;

public:
    Dequeue(int cap)
    {
        this->cap = cap;
        arr = new int[cap];
        front = 0;
        size = 0;
    }

    // inserting functions
    void insertRear(int value)
    {
        if (size >= cap)
            cout << "Dequeue is Full:\n";
        else
        {
            int rear_index = (front + size) % cap;
            arr[rear_index] = value;
            size++;
        }
    }

    void insertFront(int value)
    {
        if (size >= cap)
            cout << "Dequeu is Full:\n";
        else
        {
            front = (front + cap - 1) % cap;
            arr[front] = value;
            size++;
        }
    }

    // getters
    int getRear()
    {
        if (size == 0)
        {
            cout << "Dequeue is empty:\n";
            return -1;
        }
        else
        {
            return arr[(front + size - 1) % cap];
        }
    }

    int getFront()
    {
        if (size == 0)
        {
            cout << "Dequeu is empty:\n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    // deleting
    void deleteRear()
    {
        if (size == 0)
            cout << "Dequeue is empty:\n";
        else
        {
            size--;
        }
    }

    void deleteFront()
    {
        if (size == 0)
        {
            cout << "Dequeue is empty:\n";
        }
        else
        {
            front = (front + 1) % cap;
            size--;
        }
    }
};
int main()
{
    Dequeue dq(5);

    // Function calls
    cout << "Insert element at rear end : 5 \n";
    dq.insertRear(5);

    cout << "insert element at rear end : 10 \n";
    dq.insertRear(10);

    cout << "get rear element "
         << " " << dq.getRear() << endl;

    dq.deleteRear();
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl;

    cout << "inserting element at front end : 15 \n";
    dq.insertFront(15);

    cout << "get front element "
         << " " << dq.getFront() << endl;

    dq.deleteFront();

    cout << "After delete front element new "
         << "front become " << dq.getFront() << endl;
    return 0;
}
