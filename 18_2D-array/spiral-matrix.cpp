#include <iostream>
using namespace std;

// Function to print a matrix in spiral order
void printSpiral(int matrix[][4], int rows, int cols) {
    int startRow = 0, startCol = 0;
    int endRow = rows - 1, endCol = cols - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Print top row
        for (int col = startCol; col <= endCol; col++) {
            cout << matrix[startRow][col] << " ";
        }

        // Print right column
        for (int row = startRow + 1; row <= endRow; row++) {
            cout << matrix[row][endCol] << " ";
        }

        // Print bottom row (if it exists)
        if (startRow < endRow) {
            for (int col = endCol - 1; col >= startCol; col--) {
                cout << matrix[endRow][col] << " ";
            }
        }

        // Print left column (if it exists)
        if (startCol < endCol) {
            for (int row = endRow - 1; row > startRow; row--) {
                cout << matrix[row][startCol] << " ";
            }
        }

        // Move to the inner layer
        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }

    cout << endl;
}

int main() {
    // Define a 4x4 matrix
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4, cols = 4;

    // Print the matrix in spiral order
    printSpiral(matrix, rows, cols);

    return 0;
}
