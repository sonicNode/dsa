#include <iostream>
#include <vector>
using namespace std;
int small(int &a, int &b)
{
    return (a > b) ? b : a;
}
vector<int> merge(vector<int> &a, vector<int> &b)
{
    int n = a.size(), m = b.size();

    vector<int> ans((n + m), 0);
    int left = 0, right = 0, index = 0;
    while (left < n && right < m)
    {
        if (a[left] <= b[right])
        {
            ans[index] = a[left];
            left++, index++;
        }
        else
        {
            ans[index] = b[right];
            right++, index++;
        }
    }
    while (left < n)
    {
        ans[index] = a[left];
        index++, left++;
    }
    while (right < m)
    {
        ans[index] = b[right];
        index++, right++;
    }
    return ans;
}

void print(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
int main()
{
    vector<int> x = {1, 3, 5};
    vector<int> y = {2, 8, 9, 11, 19};
    print(x);
    cout << endl;
    print(y);
    cout << endl;
    vector<int> c = merge(x, y);
    print(c);
    return 0;
}