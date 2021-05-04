#include <stdio.h>

/*
    Here we use the fact that every third fibonacci number is even.
    Thus there is no need for checking if b is even before adding it to the sum.
*/

int main()
{
    int a = 1;
    int b = 2;
    int c;

    int sum = 0;
    int i=0;
    while (b < 4E6) {
        sum += b;

        c = a+b;
        a = b+c;
        b = a+c;
    }

    printf("%d\n", sum);

    return 0;
}
