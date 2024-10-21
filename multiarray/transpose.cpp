#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> &mat);
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void transpose(vector<vector<int>> &mat)
{
    vector<vector<int>> t_matrix;
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            v.push_back(mat[j][i]);
        }
        t_matrix.push_back(v);
    }
    print(t_matrix);
}
void print(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}
void takeInput(vector<vector<int>> &matrix, int m, int n)
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
        matrix.push_back(v);
    }
}
int main()
{
    int m, n;
    cout << "Enter the dimensions of the matrix: \n";
    cin >> m >> n;
    cout << "Enter the members of the matrix: \n";
    vector<vector<int>> matrix;
    takeInput(matrix, m, n);
    cout << "The entered matrix is: \n";
    print(matrix);
    cout << "The transpose of the given matrix is: \n";
    transpose(matrix);
    return 0;
}