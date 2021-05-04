#include <stdio.h>
#include <math.h>

/*
    This solution uses the fact that a 6-digit palindrome must
    be divisible by 11.
*/


int isPalindrome(int a)
{
    char str[6];
    sprintf(str, "%d", a);
    if (str[0] == str[5] &&
        str[1] == str[4] && 
        str[2] == str[3]) 
        {    
            return 1;
        }
    else    return 0;
}

int main()
{
    int largest = 0;

    int a = 999;
    int b, db;
    while (a >= 100)
    {
        if (a % 11 == 0) {
            b = 999;
            db = 1;
        } else {
            b = 990;
            db = 11;
        }
        while (b >= a) {
            if (a*b < largest) break;
            if (isPalindrome(a*b)) { largest = a*b; }
            b -= db;
        }
        a -= 1;
    }

    printf("Largest palindrome found: %d\n", largest);

    return 0;
}
