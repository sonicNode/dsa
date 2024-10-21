#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{
    int a = 29, b = 35, n = 47, x = 11;
    cout << std ::dec << a << endl; // set as decimal output means base of 10

    cout << std ::showbase; /*used to show the current output format or the base of the output as a prefix
                             0x for hexadecimal, 0o for octal, no sign for decimal, */

    cout << std ::dec << "b= " << b << endl;

    cout << std ::noshowbase; // reverse of showbase

    cout << std ::showpos; // shows the positive sign before any input

    cout << std ::dec << n << "\n";

    cout << std ::noshowpos; // reverse of showpos

    cout << std ::uppercase; // help to print the base in uppercase

    cout << std ::showbase << std ::hex << x;

    cout << "SetBase2 " << std ::bitset<8>(x) << " ";

    /*for formatting purposes only*/

    cout << std ::setw(9);                     // for creating stared output like ......8 or 8....... setw(n) sets the widh
    cout << std ::setfill('*') << std ::right; // setfill desecides which elements are gonna fill the output like * or .

    cout << 9879845 << "\n";

    cout << std ::setw(9) << std ::setfill('.') << std ::left << 87;

    return 0;
}