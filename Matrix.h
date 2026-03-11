#pragma once

#include <vector>

class Matrix {
private:
    int rows;
    int cols;
    std::vector<std::vector<int>> data;

public:
    Matrix(int rows, int cols);

    void set(int row, int col, int value);
    int get(int row, int col) const;

    int getRows() const;
    int getCols() const;

    void print() const;
};