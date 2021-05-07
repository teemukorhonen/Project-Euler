#include <math.h>
#include <stdio.h>



int sumOfDigits(int n, int to)
{
    int sum=0;
    while (n >= 1) {
        sum += pow(n % 10, to);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int i=2;
    int sum=0;
    while (i < 1000000)
    {
        if ( i == sumOfDigits(i, 5) ) sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}