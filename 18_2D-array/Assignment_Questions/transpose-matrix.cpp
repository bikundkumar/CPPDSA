#include <iostream>
using namespace std;

void transpose(int matrix[][3], int transposeMatrix[][3], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3] = { {1,2,3},
                         {4,5,6},
                         {7,8,9}};

    int transposeMatrix[3][3];

    cout <<"Original Matrix \n";
    printMatrix(matrix, 3, 3);

    transpose(matrix, transposeMatrix, 3, 3);

    cout <<"\nTranspose Matrix : \n";
    printMatrix(transposeMatrix, 3, 3);

    return 0;
}