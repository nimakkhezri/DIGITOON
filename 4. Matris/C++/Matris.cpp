#include "Matris.h"

Matris::Matris(const int& row, const int& column) {
    this->row = row;
    this->column = column;
    matris = new int*[row];
    for (int i = 0; i < row; i++)
        matris[i] = new int[column];
}

void Matris::set_matris() {
    std::cout << "Please enter the fields of the matrix according to the following pattern:\n\n1 2 3\n4 5 6\n7 8 9\n" << std::endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            std::cin >> matris[i][j];
    std::cout << "Done!" << std::endl;
}

void Matris::show() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cout << matris[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matris::zeroing() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matris[i][j] == 0) {
                zero(i, j);
            }
        }
    }
}