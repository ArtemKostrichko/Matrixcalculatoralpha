#include <iostream>
#include "Matrix.h"

int main() {
    Matrix m(2, 2);

    m.set(0, 0, 1);
    m.set(0, 1, 2);
    m.set(1, 0, 3);
    m.set(1, 1, 4);

    std::cout << "Matrix:" << std::endl;
    m.print();

    std::cout << std::endl;
    std::cout << "Matrix info:" << std::endl;
    m.printInfo();

    return 0;
}