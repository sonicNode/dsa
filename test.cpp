#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};
    int maxSize = INT_MIN; // Variable to store the maximum size

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].size() > maxSize)
        {
            maxSize = v[i].size();
        }
    }

    // vector<int> temp(max, 0);
    cout << maxSize;
    return 0;
}