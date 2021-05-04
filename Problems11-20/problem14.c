#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
    After testing out different variations, it seems that using
    a separate function for iterating the sequence substantially
    reduces the efficiency. Now runs in ~1s.
*/


int main()
{
    long sequenceLength = 0;
    long startingNumber = 0;
    long sequence;

    for (int i=1; i<1000000; i++) {
        int length = 1;
        sequence = i;
        while ( sequence != 1 ) { 
            if ((sequence % 2) == 0) {
                sequence = sequence / 2;
            } else {
                sequence = sequence * 3 + 1;
            }
            length++;
        }
        if ( length > sequenceLength ) {
            sequenceLength = length;
            startingNumber = i;
        }
    }
    printf("length: %ld, starting at: %ld\n", sequenceLength, startingNumber);

    return 0;
}