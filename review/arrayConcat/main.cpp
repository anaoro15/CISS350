#include <iostream>

void println(int x[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;
}
void arrayConcat(int x[], int & xlen,
                 int y[], int ylen)
{
    int temp = xlen;
    xlen = xlen + ylen;
    for (int j = 0; j < ylen; ++j)
    {
        x[j + temp] = y[j];
    }
}
int main()
{
    int x[100] = {1, 2, 3};
    int xlen = 3;
    int y[100] = {6, 7, 8, 9};
    int ylen = 4;
    arrayConcat(x, xlen, y, ylen);
    println(x, xlen);
    return 0;
}
