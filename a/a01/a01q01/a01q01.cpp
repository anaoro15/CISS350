// Name: aoro
// File: a01q01.cpp
// Description: This program prints the ASCII code for spiral.
/*
4
+--------------------------+
|                          |
|  +--------------------+  |
|  |                    |  |
|  |  +--------------+  |  |
|  |  |              |  |  |
|  |  |  +--------+  |  |  |
|  |  |  |        |  |  |  |
|  |  |  |  +--+  |  |  |  |
|  |  |  |  |     |  |  |  |
|  |  |  |  +-----+  |  |  |
|  |  |  |           |  |  |
|  |  |  +-----------+  |  |
|  |  |                 |  |
|  |  +-----------------+  |
|  |                       |
|  +-----------------------+

*/

#include <iostream>

void draw_spiral(int n);

int main()
{
    int n;
    std::cin >> n;
    draw_spiral(n);
    
    return 0;
}

void draw_spiral(int n)
{
    int total_num_rows = 4 * n + 1;
    int top_half_num_rows = 1 + n * 2;
    int input1 = n;
    int input2 = n;
    int bottom1 = n;
    int temp1 = n;
    int bottom2 = n;
    int temp2 = n;
    
    for (int i = 1; i <= total_num_rows; i++)
    {
        // handling odd rows
        if (i % 2 == 1)
        {
            // top half of the spiral
            if (i <= top_half_num_rows)
            {
                for (int bar = 1; bar <= (i - 1) / 2; bar++)
                {
                    std::cout << "|  ";
                }
                std::cout << '+';
                
                
                for (int minus = 1; minus <= 2 + input1 * 6; minus++)
                    {
                        std::cout << '-';
                    }
                
                std::cout << '+';
                for (int bar = 1; bar <= (i - 1) / 2; bar++)
                {
                    std::cout << "  |";
                }
                input1--;
            }
            // bottom part of the spiral 
            else
            {
                for (int bar = temp1; bar > 0; bar--)
                {
                    std::cout << "|  ";
                }
                std::cout << '+';
                
                
                for (int d = 0; d < 5 + (bottom1 - n) * 6; d++)
                {
                    std::cout << '-';
                }
                
                std::cout << '+';

                for (int bar = temp1 - 1; bar > 0; bar--)
                {
                    std::cout << "  |";
                }
                bottom1++;
                temp1--;
            }
             
        }
        // handling even rows 
        else
        {
            if (i <= top_half_num_rows)
            {
                for (int k = 1; k <= i / 2; k++)
                {
                    std::cout << "|  ";
                }
                
                for (int d = 0; d <= 3 + (input2 - 1) * 6; d++)
                {
                    std::cout << ' ';
                }
                
                for (int k = 1; k <= i / 2; k++)
                {
                    std::cout << "  |";
                }
                input2--;
            }
            else
            {
                for (int k = temp2 + 1; k > 0; k--)
                {
                    std::cout << "|  ";
                }
                
                for (int d = 0; d < 1 + (bottom2 - n) * 6; d++)
                {
                    std::cout << ' ';
                }
               
                for (int k = temp2; k > 0; k--)
                {
                    std::cout << "  |";
                }
                bottom2++;
                temp2--;
            }
        }
       
          std::cout << '\n';      
    }
}

