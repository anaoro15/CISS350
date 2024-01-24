#include <iostream>

int main()
{
    int i = 1;
    int j = 2;
    int k = 3;
    int * p = &k;
    int * q = &i;
    int * r = &j;
    *p = *q + *r;
    p = q;
    *p = *q + *r;
    p = r;
    *p = *q + *r;
    std::cout << i << ' ' << j << ' ' << k << '\n';
    std::cout << *p << ' ' << *q << ' ' << *r << '\n';
    return 0;
}
