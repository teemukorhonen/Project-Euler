#include <math.h>
#include <stdio.h>

/*
    Clearly b must be a prime, as otherwise n=0 is not prime.
    Efficient isPrime() is very important, as it's run thousands of times.
*/

int isPrime(int n)
{
    if (n == 2 || n == 3) return 1;
    if (n <= 1 || n%2 == 0 || n%3 == 0) return 0;
    int nsqrt = sqrt(n)+1;
    int i=5;
    while ( i < nsqrt )
    {
        if ( n % i == 0 || n %(i+2) == 0 ) return 0;
        i += 6;
    }
    return 1;
}


int main()
{
    int longest=0;
    int len, n, bestA, bestB;
    int b=3;
    while ( b < 998) {
        if ( isPrime(b) ) {
            for ( int a=-999; a<1000; a++ ) {
                len=0;
                n=0;
                while ( isPrime( n*n + a*n + b ) ) { 
                    len++;
                    n++;
                }
                if (len > longest) { longest = len; bestA = a; bestB = b; }
            }
        }
        b += 2;
    }

    printf("a:%d, b:%d, prod=%d, length=%d\n", bestA, bestB, bestA*bestB, longest);
    return 0;
}