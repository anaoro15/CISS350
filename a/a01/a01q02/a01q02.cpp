// Name: aoro
// File: a01q02.cpp

// This program prints the ASCII art (rising hills)
/*
6
                             *
                   *        ***
           *      ***      *****
     *    ***    *****    *******
 *  ***  *****  *******  *********
************************************

*/

#include <iostream>
#include <cmath>

void draw_rising_hills(int n);

int main()
{
    int n;
    std::cin >> n;
    draw_rising_hills(n);
    
    return 0;
}

void draw_rising_hills(int n)
{
    int d = 0;
    for (int i = n; i > 0; i--)     // loop that controls the spaces before the first star
    {
        for (int j = 1; j <= i * (i - 1); j++)
        {
            std::cout << ' ';
        }
        
        std::cout << '*';
            
        for (int l = 0; l < n - i; l++)    // loop that controls the number of times to write stars after the first star
        {
            for (int k = 1; k <= (i - 1) * 2; k++)    // loop that controls the number of spaces between each print of stars
            {
                std::cout << ' ';
            }
            for (int s = 0; s < 3 + l + l; s++)   // loop that controls the number of stars printed (+2 each iteration)
            {
                std::cout << '*';
            }

        }
    
        std::cout << '\n';
    }
}
