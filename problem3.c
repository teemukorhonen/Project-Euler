#include <stdio.h>
#include <math.h>

/*
    Simple brute force method.
*/

int main()
{
    long int n= 600851475143;

    int prime = 3;
    while ( n != 1 )
    {
        if ( n%prime == 0 ) {
            n = n/prime;
        }
        else {
            prime += 2;
        }
    }

    printf("%d\n", prime);
    return 0;
}