#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/*
    As the number is far too large to handle, I created a function
    that takes the number as an integer array and then iterates
    that a thousand times. The solution is efficient, as it runs
    effectively instantly on a laptop.
*/

int* iterate(int **number)
{
    int i=0;
    int carryOver=0;
    while(i < 350)
    {
        if ( (*number)[i] < 5 ) { 
            (*number)[i] = (*number)[i]*2 + carryOver;
            carryOver = 0;
        } else {
            (*number)[i] = ((*number)[i]*2 + carryOver) % 10;
            carryOver = 1;
        }
        i++;
    }
    return 0;
}


int main()
{
    /* 2**1000 has roughly 300 digits */
    int* number = calloc(350, sizeof(int));
    number[0] = 1;
    int i=0;
    int sum = 0;
    while (i < 1000)
    {
        iterate(&number);
        i++;
    }

    for ( int j=0; j<350; j++ ) {
        sum += number[j];
    }

    printf("Sum of digits is %d\n", sum);

    return 0;
}