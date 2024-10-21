#include <iostream>
#include <limits.h>
using namespace std;
struct Stack
{
    int *arr;
    int cap;
    int top;
    Stack(int cap)
    {
        this->cap = cap;
        arr = new int[cap];
        top = -1;
    }
    void push(int data)
    {
        if (top >= cap)
            cout << "Stack Full\n";
        else
        {
            top++;
            arr[top] = data;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty";
            return INT_MIN;
        }
        else
        {
            int res = arr[top];
            top--;
            return res;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack Empty";
            return INT_MIN;
        }
        else
            return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}