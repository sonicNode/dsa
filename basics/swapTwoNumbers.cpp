#include<iostream>
//#include<conio.h>
using namespace std;
int swap(int &a, int &b)   //this function is to swap two inputs
{

    int temp=a;
    a=b;
    b=temp;
    cout <<"this is return &a ";
    return a;
    
}
int main()    // the driver code starts here
{
    int num1,num2;
    cin >> num1 >> num2;
    cout << swap(num1,num2) << endl;
    cout << num1 << endl << num2 << "\n";
    system("pause");    // promts user to press any key and stops the program.exe from being closed by itself
    //getch();          //also prevents the program.exe from closing itself waits until any character is entered by the user
                        //must use with #include<conio.h>
    return 0;

}
