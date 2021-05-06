#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>



static int myCompare(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}
  
void sort(char* arr[], int n)
{
    qsort(arr, n, sizeof(const char*), myCompare);
}

int numberFromChar(char c)
{
    switch (c)
    {
    case 'A': return 1;case 'H': return 8;case 'O': return 15;case 'V': return 22;
    case 'B': return 2;case 'I': return 9;case 'P': return 16;case 'W': return 23;
    case 'C': return 3;case 'J': return 10;case 'Q': return 17;case 'X': return 24;
    case 'D': return 4;case 'K': return 11;case 'R': return 18;case 'Y': return 25;
    case 'E': return 5;case 'L': return 12;case 'S': return 19;case 'Z': return 26;
    case 'F': return 6;case 'M': return 13;case 'T': return 20;
    case 'G': return 7;case 'N': return 14;case 'U': return 21;
    
    default:
        break;
    }
}

int nameToValue(char **name)
{
    int len = strlen( *name );
    int sum = 0;
    for (int i=0; i<len; i++) {
        sum += numberFromChar( (*name)[i] );
    }
    return sum;
}

int main()
{
    
    FILE *f = fopen( "problem22.txt", "r" );

    char str[50000];
    fgets(str, 50000, f);
    char **names = malloc(5163 * sizeof(char *));
    for (int i=0; i<5163;i++) {
        names[i] = calloc( 20, sizeof(char) );
    }
    int i=1;
    char *tok = calloc( 100, sizeof(char) );
    strcpy(names[0], strtok(str, "\""));
    while ( i < 5163 )
    {
        strcpy(tok, strtok(NULL, "\""));
        strcpy(names[i], strtok(NULL, "\""));
        i++;
    }

    sort(names, 5163);

    int prod=0;
    for (int i=0; i<5163; i++) {
        prod += (i+1)*(nameToValue( &names[i] ));
    }
    printf("%d\n", prod);

    return 0;
}