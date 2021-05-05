#include <math.h>
#include <stdio.h>
#include <stdlib.h>




void readFile(int ***arr)
{
    FILE *f = fopen("problem11.txt", "r");
    int j,i=0;
    while( i < 20 )
    {
        j=0;
        while (j < 20) {
            fscanf(f, "%d", &((*arr)[i][j]));
            j++;
        }
        i++;
    }
}

/* Finds the vertical product from (r,c) */
int vertical(int r, int c, int ***arr)
{
    int prod= 1;
    for (int i=0; i<4; i++) {
        prod *= (*arr)[r+i][c];
    }
    return prod;
}

/* Finds the horizontal product from (r,c) */
int horizontal(int r, int c, int ***arr)
{
    int prod= 1;
    for (int i=0; i<4; i++) {
        prod *= (*arr)[r][c+i];
    }
    return prod;
}

/* Finds the diagonal product from (r,c) to left and down */
int diagonalLeft(int r, int c, int ***arr)
{
    int prod= 1;
    for (int i=0; i<4; i++) {
        prod *= (*arr)[r+i][c-i];
    }
    return prod;
}

/* Finds the diagonal product from (r,c) to right and down */
int diagonalRight(int r, int c, int ***arr)
{
    int prod= 1;
    for (int i=0; i<4; i++) {
        prod *= (*arr)[r+i][c-i];
    }
    return prod;
}


int main()
{
    /* Initialize grid of numbers */
    int **arr = calloc( 20, sizeof(int *) );
    for (int i=0; i<20; i++) {
        arr[i] = calloc( 20, sizeof(int) );
    }
    readFile(&arr);

    int largest = 0;
    int current;
    for (int i=0; i<20; i++) {
        for (int j=0; j<16; j++) {
            if ( (current = horizontal(i,j,&arr)) > largest ) {
                largest = current;
            }
        }
    }
    for (int i=0; i<16; i++) {
        for (int j=0; j<20; j++) {
            if ( (current = vertical(i,j,&arr)) > largest ) {
                largest = current;
            }
        }
    }
    for (int i=0; i<16; i++) {
        for (int j=4; j<20; j++) {
            if ( (current = diagonalLeft(i,j,&arr)) > largest ) {
                largest = current;
            }
        }
    }
    for (int i=0; i<16; i++) {
        for (int j=0; j<16; j++) {
            if ( (current = diagonalRight(i,j,&arr)) > largest ) {
                largest = current;
            }
        }
    }

    printf("Largest product found: %d\n", largest);

    return 0;
}