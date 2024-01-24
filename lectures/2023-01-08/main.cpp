#include <iostream>

// T(n) = O(n^3)
int f(int x[], int n)
{
    int max = 0;
    for (int i = 0; i <= n - 1; ++i)
    {
        for (int j = i; j <= n - 1; ++j)
        {
            int s = 0;
            for (int k = i; k <= j; ++k)
            {
                s += x[k];
            }
            if (s > m) s = m;
        }
    }
}

int main()
{
    int x[9] = {5,2,-3,1,4,-5,0,3,-8);
    f(x,9);
}
