#include <math.h>
#include <stdio.h>

/*
    In order to reduce the complexity from O(n) to O(1),
    we use arithmetic sum.
*/

int sumOfMultiplesTo(int k, int to)
{
    int n = floor(to/k);
    return n*(k+k*n)/2;
}


int main()
{
    int result = sumOfMultiplesTo(3,999) + sumOfMultiplesTo(5,999) - sumOfMultiplesTo(15,999);
    printf("%d\n", result);
    return 0;
}
