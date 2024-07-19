#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
private:
    int row, column;
    int** matrix;
    void set_zero(const int& z_row, const int& z_column) {
        for (int i = 0; i < column; i++)
            matrix[z_row][i] = 0;
        for (int i = 0; i < row; i++) 
            matrix[i][z_column] = 0;
    }
public:
    Matrix(const int& row, const int& column);
    ~Matrix();

    void set_matrix();
    void show();
    void zeroing();
};

#endif