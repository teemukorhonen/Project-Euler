#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/*
    The numbers are too long to read on their own.
    We're only interested in the most significant digits, so we can disregard
    the last 30 or so digits.
*/

int main()
{

    FILE *f;
    if ( (f = fopen("problem13.txt", "r")) == NULL ) {
        printf("Opening file failed.\n");
        exit(1);
    }

    long long *nbr = calloc( 100, sizeof(long long) );
    int i=0;
    char line[17+1];
    char trash[100];
    while ( fgets(line, 17, f) )
    {
        sscanf(line, "%lld", &nbr[i]);
        i++;
        fgets(trash, 100, f);
    }
    
    long long sum= 0;
    for ( int j=0; j < 100; j++ ) {
        sum += nbr[j];
    }

    printf("The sum is %lld\n", (long long)(sum/1E8));

    return 0;
}
