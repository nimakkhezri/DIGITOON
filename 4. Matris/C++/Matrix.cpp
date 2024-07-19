#include "Matrix.h"

Matrix::Matrix(const int& row, const int& column) {
    this->row = row;
    this->column = column;
    matrix = new int*[row];
    for (int i = 0; i < row; i++)
        matrix[i] = new int[column];
}

Matrix::~Matrix() {
    for (int i = 0; i < row; i++)
        delete[] matrix[i];
    
    delete[] matrix;
}

void Matrix::set_matrix() {
    std::cout << "Please enter the fields of the matrix according to the following pattern:\n\n1 2 3\n4 5 6\n7 8 9\n" << std::endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            std::cin >> matrix[i][j];
    std::cout << "\nDone!" << std::endl;
}

void Matrix::show() {
    std::cout << std::endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matrix::zeroing() {
    std::vector<int> rows;
    std::vector<int> columns;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] == 0) {
                rows.push_back(i);
                columns.push_back(j);
            }
        }
    }
    
    for (int i = 0; i < rows.size(); i++)
        set_zero(rows[i], columns[i]);
}