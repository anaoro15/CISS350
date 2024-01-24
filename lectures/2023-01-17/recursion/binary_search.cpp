#include <iostream>

int binary_search(int x[], int left, int right, int target)
{
    int n = right - left + 1;
    if (n <= 0) return -1;
    else
    {
        int mid = (left + right) / 2;
        if (target == x[mid])
            return mid;
        else if (left < x[mid])
            return binary_search(x, left, mid - 1, target);
        else
            return binary_search(x, mid + 1, right, target);
    }
}
int main()
{
    int x[] = {1, 2, 3, 4, 5, 6, 7};
    binary_search(x, 0, 6, 3);
    return 0;
}
