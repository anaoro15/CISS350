#include <iostream>

int fibernachi(int n)
{
    if (n <= 1) return 1;
    else return fibernachi(n - 1) + fibernachi(n - 2);
}
int main()
{
    int n;
    std::cin << n;
    fibernachi(n);
    return 0;
}
