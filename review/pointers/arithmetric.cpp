#include <iostream>

int main()
{
    int x = 42;
    int * p = &x;
    std::cout << (long long int)(p) << ' '
              << (long long int)(p + 2) << ' '
              << (long long int)(p - 1) << ' '
              << (long long int)(p - 3) << '\n'; 
    return 0;
}
