#include <iostream>
#include <iomanip>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex() {}               // default constructor
    Complex(int real, int img) // parameterized constructor
    {
        this->real = real;
        this->img = img;
    }
    void set_real(int real) // setter
    {
        this->real = real;
    }
    void set_img(int img) // setter
    {
        this->img = img;
    }
    Complex operator+(const Complex &temp)
    {
        Complex ans;
        ans.real = (temp.real + real);
        ans.img = (temp.img + img);
        return ans;
    }
    void print()
    {
        cout << std::setw(3) << std::setfill(' ');
        cout << real << " + ";
        cout << std::setw(3) << std::setfill(' ');
        cout << img << "i" << endl;
    } // getter
};
int main()
{
    Complex c1, c2(4, 7);
    Complex *c4 = new Complex;
    c1.set_real(10);
    c1.set_img(8);
    Complex c3 = c1 + c2;
    // c2.set_real(67);
    // c2.set_img(5);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}