#include <math.h>
#include <stdio.h>


/*
    Instead of brute forcing, both formulations have
    simple expressions we can use:

    1) For square of sum we have that:
        sqsum = (1 + 2 + 3 + ... + n)^2
              = (n(n+1)/2)^2

    2) For sum of squares we have that:
        sumsq = 1^2 + 2^2 + ... + n^2
              = n(n+1)(2n+1)/6

*/

int squareOfSum(int n)
{
    return pow(n*(n+1)/2,2);
}

int sumOfSquares(int n)
{
    return (n*(n+1)*(2*n+1)/6);
}

int main()
{
    printf("%d\n", squareOfSum(100) - sumOfSquares(100));
    return 0;
}
