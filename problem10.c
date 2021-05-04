#include <stdio.h>
#include <math.h>


int isPrime(int n)
{
    // Check small cases
    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;

    // Check usual cases
    if ( n % 2 == 0 ) return 0;
    if ( n % 3 == 0 ) return 0;

    int i=5;
    int nsqrt = sqrt(n);
    while (i < nsqrt+1)
    {
        if ( n % i == 0 ) return 0;
        i += 2;
    }
    return 1;
}


int main()
{
    long int sumOfPrimes=5;
    int i=5;
    int limit = 2E6;

    while (i <= limit)
    {
        if ( isPrime(i) ) sumOfPrimes += i;
        i += 2;
        if ( i <= limit && isPrime(i) ) sumOfPrimes += i;
        i += 4;
    }
    printf("%ld\n", sumOfPrimes);
    return 0;
}