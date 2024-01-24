#include <iostream>
#include <cmath>
#include <cstdlib>

bool isprime(int * prime)
{
    if (*prime <= 1) return false;
    else
    {
        for (int i = 2; i < sqrt(*prime); ++i)
        {
            if (*prime % i == 0) return false;
        }
    }
    return true;
}
int * nextprime(int * prime)
{
    ++(*prime);
    while (1)
    {
        if (isprime(prime)) return prime;
        else ++(*prime);
    }
}

int main()
{
    int a = 5;
    std::cout << *nextprime(nextprime(nextprime(&a))) << std::endl;
    return 0;
}
