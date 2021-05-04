#include <math.h>
#include <stdio.h>

// https://en.wikipedia.org/wiki/Pythagorean_triple

int main()
{
    int a,b,c;
    for (int m=2; m<100; m++) {
        for (int n=1; n<m; n++) {
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;
            if (a + b + c == 1000) {
                printf("a: %d, b: %d, c: %d\n", a,b,c);
            } 
        }
    }
    return 0;
}
