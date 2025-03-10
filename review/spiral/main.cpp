#include <iostream>
void draw_spiral(int n)
{
    int k = 0;
    for (int i = 0; i <= n * 2; ++i)
    {
        if (i % 2 == 0)
        {
            for (int l = i; l > 0; l--)
            {
                std::cout << "|  ";
            }
            std::cout << '+';
        }
        else
        {
            for (int l = i - 1; l > 0; l--)
            {
                std::cout << "|  ";
            }
        }
        
        // middle point
        for (int j = 0; j <= (n - 4) * 6 + 2; ++j)
        {
            std::cout << '-';
        }

        
        if (i % 2 == 0)
        {
            std::cout << '+';
            for (int l = i; l > 0; l--)
            {
                std::cout << "  |";
            }
        }
        else
        {
            for (int l = i - 1; l > 0; l--)
            {
                std::cout << "  |";
            }
        }
        std::cout << '\n';
    }
}

int main()
{
    int n;
    std::cin >> n;
    draw_spiral(n);
    return 0;
}
