// Name: aoro
// FIle: main.cpp

// This program computes the running max
#include <iostream

// FIRST WAY
int max1(int x[], int n)
{
    int max = x[0];
    for (int i = 1; i < n; ++i)
    {
        if (x[i] > max) max = x[i];
    }
    return max;
}

// SECOND WAY
int max2(int x[], int n)
{
    int max;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0) max = x[0];
        else
        {
            if (x[i] > max) max = x[i];
        }
    }
    return max;
}

// THIRD WAY
int max3(int x[], int n)
{
    int max = -1;
    for (int i = 0; i < n; ++i)
    {
        if (x[i] > max) max = x[i];
    }
    return max;
}

int main()
{
    int x[i] = {1, 2, 33, 42, 12, 2};
    std::cout << max1(x) << std::endl;
    std::cout << max2(x) << std::endl;
    std::cout << max3(x) << std::endl;
    return 0;
}
