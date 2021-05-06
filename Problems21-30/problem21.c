#include <stdio.h>
#include <math.h>


/* Re-using the function from problem 12 */
int sumOfDivisors(int n)
{
    int sumOfDivisors = 0;
    int i=1;
    int nsqrt = sqrt(n)+1;
    while ( i < nsqrt )
    {
        if ( n % i == 0 ) {
            if ( n/i == 1 ) sumOfDivisors += i;
            else sumOfDivisors += i + n/i;
        }
        i++;
    }
    return sumOfDivisors-n;
}


int main()
{
    int i=2;
    int b;
    int sum=0;
    while (i < 10000)
    {
        b = sumOfDivisors(i);
        if ( sumOfDivisors(b) == i && i != b) {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}