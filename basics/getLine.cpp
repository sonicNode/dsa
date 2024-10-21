#include<iostream>
using namespace std;
string printline(string line)
{
    getline(cin,line);
    return line;
}
int main()
{
    string inputByUser;
    printline(inputByUser);
    return 0;

}