#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))


/*
    This problem was solved by using dynamic programming.
    The pyramid is "collapsed" to top obtaining the
    most optimal results on the way.
*/


int main()
{

    int **arr = calloc ( 15, sizeof( int * ) );
    for (int i=0; i<15; i++) {
        arr[i] = calloc( i+1, sizeof(int) );
    }
    FILE *f = fopen( "problem18.txt", "r" );
    char line[256];
    int i=0;
    while ( !feof(f) )
    {
        for (int j=0; j<i+1; j++) {
            fscanf( f, "%d", &arr[i][j] );
        }
        i++;
    }

    i=13;
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