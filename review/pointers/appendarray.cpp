#include <iostream>
void array_println(int x[], int xlen)
{
    for (int i = 0; i < xlen; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;
}
void array_append(int x[], int * xlen, int value)
{
    x[*xlen] = value;

    (*xlen)++;
}
int main()
{
    int x[10] = {2, 3, 5};
    int xlen = 3;
    array_append(x, &xlen, 7);
    array_println(x, xlen);
    return 0;
}
