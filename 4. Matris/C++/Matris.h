#ifndef MATRIS_H
#define MATRIS_H

#include <iostream>
#include <vector>

class Matris {
private:
    int row, column;
    int** matris;
    void set_zero(const int& z_row, const int& z_column) {
        for (int i = 0; i < column; i++)
            matris[z_row][i] = 0;
        for (int i = 0; i < row; i++) 
            matris[i][z_column] = 0;
    }
public:
    Matris(const int& row, const int& column);

    void set_matris();
    void show();
    void zeroing();
};

#endif