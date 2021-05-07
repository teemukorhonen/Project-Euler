#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))


/*
    Re-using code from problem 18.
*/


int main()
{

    int **arr = calloc ( 100, sizeof( int * ) );
    for (int i=0; i<100; i++) {
        arr[i] = calloc( i+1, sizeof(int) );
    }
    FILE *f = fopen( "problem67.txt", "r" );
    int i=0;
    while ( !feof(f) )
    {
        for (int j=0; j<i+1; j++) {
            fscanf( f, "%d", &arr[i][j] );
        }
        i++;
    }

    i=98;
    while ( i > -1 )
    {
        for (int j=0; j<=i; j++) {
            arr[i][j] = arr[i][j] + MAX( arr[i+1][j], arr[i+1][j+1] );
        }
        i--;
    }
    printf("Maximum path sum: %d\n", arr[0][0]);

    return 0;
}