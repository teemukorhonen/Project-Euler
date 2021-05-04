#include <math.h>
#include <stdio.h>


/*
    I create a function for checking if a number is prime,
    and then use it to find 10001st prime.
*/

int isPrime(int a)
{
    int asqrt = sqrt(a)+1;
    int i=3;
    if (a == 2) return 1;
    if (a % 2 == 0) return 0;
    while ( i < asqrt )
    {
        if ( a % i == 0 ) return 0;
        else i += 2;
    }
    return 1;
}




int main()
{
    int primes = 1;
    int i = 1;
    while (primes < 10001)
    {
        i += 2;
        if (isPrime(i)) primes += 1;
    }

    printf("%d\n", i);

    return 0;
}