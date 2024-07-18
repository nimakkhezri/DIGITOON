#include <iostream>
#include "Matris.h"

int main() {
    std::cout << "Please enter the row and column of the matrix (m n): ";
    int row, column;
    std::cin >> row >> column;
    Matris m(row, column);
    m.set_matris();
    m.zeroing();
    m.show();
    system("Pause");
    return 0;
}