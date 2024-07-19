#include <iostream>
#include "Matrix.h"

int main() {
    std::cout << "Please enter the row and column of the matrix (m n): ";
    int row, column;
    std::cin >> row >> column;
    Matrix m(row, column);
    m.set_matrix();
    m.zeroing();
    m.show();
    system("Pause");
    return 0;
}