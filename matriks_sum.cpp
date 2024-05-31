#include <iostream>
using namespace std;

void inputMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Masukkan elemen untuk matriks pada baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    
    cout << "Masukkan jumlah baris matriks: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100], result[100][100];

    cout << "Masukkan elemen-elemen untuk matriks pertama:" << endl;
    inputMatrix(matrix1, rows, cols);

    cout << "Masukkan elemen-elemen untuk matriks kedua:" << endl;
    inputMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, result, rows, cols);

    cout << "Hasil penjumlahan matriks:" << endl;
    printMatrix(result, rows, cols);

    return 0;
}
