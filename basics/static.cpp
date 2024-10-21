// C++ program to demonstrate
// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

int demo()
{
	// static variable
	static int count = 0;
	cout << count << " ";
	
	// value is updated and
	// will be carried to next
	// function calls
	count++;
    return count;
}

int main()
{
	for (int i=0; i<5; i++)	
		demo();
	return 0;
}