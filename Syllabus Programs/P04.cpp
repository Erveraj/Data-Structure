// Program No 4: Program to perform addition, subtraction and multiplication of two matrices.
#include <iostream>
#include <vector>

using namespace std;

void readMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    matrix.assign(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << '\n';
    }
}

vector<vector<int>> addMatrix(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    int rows = a.size();
    int cols = a[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

vector<vector<int>> subtractMatrix(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    int rows = a.size();
    int cols = a[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

vector<vector<int>> multiplyMatrix(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    int rows = a.size();
    int cols = b[0].size();
    int inner = b.size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < inner; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Matrix 1 rows: ";
    cin >> rows1;
    cout << "Matrix 1 cols: ";
    cin >> cols1;
    cout << "Matrix 2 rows: ";
    cin >> rows2;
    cout << "Matrix 2 cols: ";
    cin >> cols2;

    vector<vector<int>> matrix1, matrix2;
    cout << "\nEnter values for Matrix 1:\n";
    readMatrix(matrix1, rows1, cols1);
    cout << "\nEnter values for Matrix 2:\n";
    readMatrix(matrix2, rows2, cols2);

    if (rows1 == rows2 && cols1 == cols2) {
        cout << "\nAddition of matrices:\n";
        printMatrix(addMatrix(matrix1, matrix2));

        cout << "\nSubtraction of matrices (Matrix1 - Matrix2):\n";
        printMatrix(subtractMatrix(matrix1, matrix2));
    } else {
        cout << "\nAddition and subtraction are not possible because matrix dimensions differ.\n";
    }

    if (cols1 == rows2) {
        cout << "\nMultiplication of matrices:\n";
        printMatrix(multiplyMatrix(matrix1, matrix2));
    } else {
        cout << "\nMultiplication is not possible because Matrix1 cols != Matrix2 rows.\n";
    }

    return 0;
}