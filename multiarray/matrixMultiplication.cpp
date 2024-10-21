#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void print(vector<vector<int>> &mat);

void multiply(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{

    int r1 = mat1.size();
    int c1 = mat1[0].size();
    int r2 = mat2.size();
    int c2 = mat2[0].size();
    vector<vector<int>> ans(r1, vector<int>(c2, 0));

    for (int i = 0; i < r1; i++)
    {
        // vector<int> row;
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                ans[i][j] = ans[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
        // ans.push_back(row);
    }
    print(ans);
}
void print(vector<vector<int>> &mat)
{

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
            cout << std ::setw(3) << std ::setfill(' ') << std ::left << mat[i][j] << "  ";
        cout << endl
             << endl;
    }
}
void takeInput(vector<vector<int>> &mat, int &m, int &n)
{

    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        mat.push_back(v);
    }
}
int main()
{
    int c1, r1, c2, r2;
    cout << "Enter the dimension of the 1st matrix: \n";
    cin >> r1 >> c1;
    vector<vector<int>> matrix1;
    vector<vector<int>> matrix2;
    cout << "Enter the elements of the 1st matrix: \n";
    takeInput(matrix1, r1, c1);
    cout << "Enter the dimension of the 2nd matrix: \n";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "The C1 must equal to R2.\n";
        return 0;
    }
    cout << "Enter the elements of the 2nd matrix: \n";
    takeInput(matrix2, r2, c2);
    print(matrix1);
    cout << "X" << endl
         << endl;
    print(matrix2);
    cout << "=" << endl;
    multiply(matrix1, matrix2);
    system("pause");
    //   vector<vector<int>> temp = multiply(matrix1, matrix2);
    //   print(temp);
    return 0;
}