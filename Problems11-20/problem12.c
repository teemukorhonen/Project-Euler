#include <math.h>
#include <stdio.h>




int countDivisors(int n)
{
    int divisors = 0;
    int i=1;
    int nsqrt = sqrt(n)+1;
    while ( i < nsqrt )
    {
        if ( n % i == 0 ) {
            if ( n/i == 1 ) divisors++;
            else divisors += 2;
        }
        i++;
    }
    return divisors;
}


int main()
{
    int i=1;
    int triangleNum=0;
    while (i < 1E6)
    {
        triangleNum += i;
        if (countDivisors(triangleNum) > 500) {
            printf("%d\n", triangleNum);
            break;
        }
        i++;
    }

    return 0;
}
