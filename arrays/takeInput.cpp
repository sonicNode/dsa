#include <iostream>
using namespace std;
void take_input(int arr[])
{
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
}
void print_output(int arr[])
{
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[5], cpy[5];
    take_input(arr);

    print_output(arr);
    return 0;
}