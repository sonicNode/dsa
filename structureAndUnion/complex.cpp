#include <iostream>
using namespace std;
struct Complex
{
    int img;
    int real;
};
Complex add(Complex c1, Complex c2)
{
    Complex output;
    output.img = c1.img + c2.img;
    output.real = c1.real + c2.real;
    return output;
}
int main()
{
    Complex c1, c2;
    cin >> c1.real >> c1.img;
    cin >> c2.real >> c2.img;
    Complex c3 = add(c1, c2);
    cout << c3.real << " + " << c3.img << 'i';
    return 0;
}