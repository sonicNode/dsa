#include <iostream>
#include <string>

using namespace std;

bool isPangram(string &s) {
    // create an array of integers to keep track of the letters seen in the input string
    int lettersSeen[26] = {0};
    // change the input string to lower case
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    //iterate through each character in the input string
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            lettersSeen[s[i] - 'a']++;
        }
    }
    
    //iterate through the array, and check if all elements are non-zero
    for (int i = 0; i < 26; i++) {
        if (lettersSeen[i] == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    string s;
    getline(cin, s);  // "The quick brown fox jumps over the lazy dog";
    if (isPangram(s)) {
        cout << s << " is a pangram" << endl;
    } else {
        cout << s << " is not a pangram" << endl;
    }
    return 0;
}
