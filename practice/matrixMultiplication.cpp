#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Matrix
{
public:
    int row, coloumn;

public:
    Matrix() {}
    Matrix(int &row, int &coloumn) : row(row), coloumn(coloumn) {}

    vector<vector<int>> matrix;

    void take_input()
    {
        for (int i = 0; i < row; i++)
        {
            vector<int> row;
            for (int j = 0; j < coloumn; j++)
            {
                int temp;
                cin >> temp;
                row.push_back(temp);
            }
            matrix.push_back(row);
        }
    }
    void print()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < coloumn; j++)
            {
                cout << std::setw(3) << std::setfill(' ') << matrix[i][j] << "  ";
            }
            cout << endl
                 << endl;
        }
    }
    Matrix operator*(Matrix &m)
    {
        Matrix res(row, m.coloumn);
        res.matrix.resize(matrix.size());
        for (int i = 0; i < matrix.size(); i++)
        {
            res.matrix[i].assign(m.matrix[0].size(), 0);
            for (int j = 0; j < m.matrix[0].size(); j++)
            {
                for (int k = 0; k < matrix[0].size(); k++)
                {
                    res.matrix[i][j] = res.matrix[i][j] + (matrix[i][k] * m.matrix[k][j]);
                }
            }
        }
        return res;
    }
};

int main()
{
    int row1, coloumn1, row2, coloumn2;
    // taking values for matrix1
    cout << "Enter the dimension of the first matrix: \n";
    cin >> row1 >> coloumn1;

    Matrix matrix1(row1, coloumn1);
    cout << "Enter the values for the first matrix: \n";
    matrix1.take_input();
    // taking values for matrix2
    cout << "Enter the dimension of the second matrix: \n";
    cin >> row2 >> coloumn2;

    Matrix matrix2(row2, coloumn2);
    cout << "Enter the values for the second matrix: \n";
    matrix2.take_input();
    // multiplication
    try
    {
        if (matrix1.coloumn != matrix2.row)
            throw "error";
        Matrix m3 = matrix1 * matrix2;
        matrix1.print();
        cout << endl
             << "X" << endl;
        matrix2.print();
        cout << endl
             << "=" << endl;
        m3.print();
    }
    catch (...)
    {
        cout << "The coloumn of the first matrix have to be same with the row of the second matrix: ";
    }
    system("pause");
    return 0;
}
