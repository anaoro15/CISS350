// Name: aoro
// File: main.cpp

// this program performs a bubble sort on integer array

#include <iostream>

void bubblesort(int x[], int start, int end)
{
    for (int j = end - 2; j >= 0; --j)
    {
        for (int i = start; i <= j; ++i)
        {
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
        }
    }
    return;
}

void pointer_bubblesort(int *start, int *end)
{
    for (int * j = end - 2; j >= 0; --j)
    {
        for (int * i = start; i <= j; ++i)
        {
            if (*i > *(i + 1))
            {
                int t = *i;
                *i = *(i + 1);
                *(i + 1) = t;
            }
        }
    }
    return;
}

int main()
{
    int x[] = {2, 4, 1, 5, 3};
    int * start = &x[0];
    int * end = &x[5];
    pointer_bubblesort(start, end);
    std::cout << '{';
    for (int i = 0; i < 5; ++i)
    {
        if (i != 4)
            std::cout << x[i] << ',';
        else
            std::cout << x[i];
    }
    std::cout << '}';
    return 0;
}
