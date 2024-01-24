// Name: aoro
// File: main.cpp

// this program performs a binary search


#include <iostream>

int binary_search(int x[], int t, int n)
{
    int left = 0;
    int right = n;
    int mid = left + ((right - left) / 2); 
    int target = t;
    
    while(x[left] <= x[right])
    {
        if (x[mid] == target) return mid;
        else if (x[mid] < target) { left = mid + 1; }
        else { right = mid; }
    }
    return -1;
}

int main()
{
    int x[] = {1, 2, 3, 4, 5, 6};
    std::cout <<  binary_search(x, 3, 6) << '\n';
    return 0;
}
