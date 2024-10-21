#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> multiplyMatrix(vector<vector<int>> &A, vector<vector<int>> &B)
{
    int r1 = A.size();
    int c1 = A[0].size();
    int r2 = B.size();
    int c2 = B[0].size(); // code here
    vector<vector<int>> ans(r1, vector<int>(c2, 0));

    for (int i = 0; i < r1; i++)
    {
        // vector<int> row;
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                ans[i][j] = ans[i][j] + (A[i][k] * B[k][j]);
            }
        }
        // ans.push_back(row);
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat1{{1, 2},
                             {3, 4},
                             {5, 6}};
    vector<vector<int>> mat2{{4, 5, 7},
                             {7, 8, 9}};

    vector<vector<int>> output = multiplyMatrix(mat1, mat2);

    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[0].size(); j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}