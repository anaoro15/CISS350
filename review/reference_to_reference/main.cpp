#include <iostream>

void f(int & a, double c)
{
    a = a + int(c);
    c = 1.0;
}
void g(int & b, double & c)
{
    b *= 2 + int(c);
    c = 0.0;
    f(b, c);
}
int main()
{
    int x = 42;
    double y = 3.14;
    g(x, y);
    std::cout << x << ' ' << y << std::endl;
    return 0;
}
