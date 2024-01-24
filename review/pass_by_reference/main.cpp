#include <iostream>

int main()
{
    int i = 5;
    int & j = i;
    std::cout << i << ' ' << j << std::endl;
    i = 42;
    std::cout << i << ' ' << j << std::endl;
    j = 0;
    std::cout << i << ' ' << j << std::endl;
    return 0;
}
