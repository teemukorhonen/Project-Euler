#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Re-using the function from problem 21 */
int sumOfDivisors(int n)
{
    int sumOfDivisors = 0;
    int i=1;
    int nsqrt = sqrt(n)+1;
    while ( i < nsqrt )
    {
        if ( n % i == 0 ) {
            if ( n/i == i ) sumOfDivisors += i;
            else sumOfDivisors += (i + n/i);
        }
        i++;
    }
    return (sumOfDivisors-n);
}


int main()
{
    int *abundant = calloc( 6965, sizeof(int) );
    int limit=28123;
    int sum=0;
    int count=0;
    int i=0;
    while ( i < limit )
    {
        if ( sumOfDivisors(i) > i ) {
            abundant[count] = i;
            count++;
        }
        i++;
    }
    int c;
    int *results = calloc( limit, sizeof(int) );
    for ( int j=0; j < count; j++ ) {
        for ( int k=0; k < count; k++ ) {
            if ( (c = abundant[j]+abundant[k]) <= limit ) {
                results[c] = 1; // 1 stands for TRUE
            } else {
                break;
            }
        }
    }
    for (int i=0; i<limit; i++) {
        if ( !results[i] ) sum += i;
    }


    printf("%d\n", sum);

    return 0;
}