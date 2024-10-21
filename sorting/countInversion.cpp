#include <iostream>
#include <vector>
using namespace std;
int mergeandCount(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int j = low, k = mid + 1, cnt = 0;
    while (j <= mid && k <= high)
    {
        if (v[j] <= v[k])
            temp.push_back(v[j++]);
        else
        {
            temp.push_back(v[k]);
            cnt = cnt + (mid - j + 1);
            k++;
        }
    }
    while (j <= mid)
        temp.push_back(v[j++]);
    while (k <= high)
        temp.push_back(v[k++]);
    int i = low;
    for (int x : temp)
        v[i++] = x;
    return cnt;
}
int inversion(vector<int> &v, int low, int high)
{
    int cnt = 0;
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        cnt += inversion(v, low, mid);
        cnt += inversion(v, mid + 1, high);
        cnt += mergeandCount(v, low, mid, high);
    }
    return cnt;
}
int inversionCall(vector<int> &v)
{
    int low = 0, high = v.size() - 1;
    return inversion(v, low, high);
}
void print(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}
int main()
{
    vector<int> arr{2, 4, 1, 3, 5};
    print(arr);
    cout << "Number of inversion: " << inversionCall(arr) << endl;
    print(arr);
    return 0;
}