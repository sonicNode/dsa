#include <iostream>
#include "C:\Users\ankit\Desktop\programme\code\myclass\multiplyMatrix.cpp"
using namespace std;
int main()
{
    int c1, c2, r1, r2;
    cout << "Dimension_1: \n";
    cin >> r1 >> c1;
    Matrix m1(r1, c1);
    cout << "Elements_1:\n";
    m1.take_input();
    cout << "Dimension_2: \n";
    cin >> r2 >> c2;
    Matrix m2(r2, c2);
    cout << "Elements_2:\n";
    m2.take_input();
    m1.print();
    m2.print();
    Matrix m3 = m1 * m2;
    m3.print();
    return 0;
}