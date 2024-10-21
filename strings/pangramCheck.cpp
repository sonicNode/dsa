#include <iostream>
using namespace std;
void pangram(const string &str)
{
    int freq[256] = {0};
    int len = str.length();
    int letters = 0;
    for (int x : str)
        freq[x]++;
    // for(int i = 0 ; i < len ; i ++)
    // {
    //     int temp = str[i];
    //     freq[temp]++;
    // }
    int i = 65, j = 97;
    while (i < 91 && j < 123)
    {
        freq[i] = freq[i] + freq[j];
        i++;
        j++;
    }
    for (int i = 65; i < 91; i++)
    {
        if (freq[i] > 0)
            letters++;
    }

    if (letters >= 26)
        cout << "true " << letters;
    else
        cout << "false " << letters;
}
int main()
{
    string input;
    cout << "Enter the string here : ";
    getline(cin, input);
    pangram(input);
    return 0;
    // if(pangram(input))
    //   cout << "The string is a \"Pangram\".";
    // else
    //   cout << "The string is not a \"Pangram\".";
    // return 0;
}