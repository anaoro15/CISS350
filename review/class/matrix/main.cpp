#include <iostream>
#include "Matrix.h"

int main()
{
    Matrix m(2, 3);
    std::cout << m << '\n';

    m(0, 0) = 5; // m.operator()(0, 0) = 5;  
    std::cout << m << '\n';

    return 0;
}
