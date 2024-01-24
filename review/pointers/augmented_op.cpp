#include <iostream>

int main()
{
    int x = 42;
    int * p;
    int * q = p;
    int * r = p;
    int * s = p;
    q++;
    r += 5;
    s--;
    std::cout << (long long int) q – (long long int) p
              << ' '
              << (long long int) r – (long long int) p
              << ' '
              << (long long int) s – (long long int) p
              << '\n';
    return 0;
}
