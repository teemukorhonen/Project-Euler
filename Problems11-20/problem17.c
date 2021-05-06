#include <stdio.h>


/*
    First thing worth of noticing is that the letter count
    is the same between different hundreds apart from the prefix.

    Numbers 1-9 are repeated total of 90 times as the last number.
    Additionally, each of them is repeated a hundred times during
    each hundred. Thus words "one" to "nine" are repeated 190 times
    each totally.

    Numbers 10-19 are repeated at the start of each hundred. Thus each
    of them is mentioned 10 times.

    Even tens (20, 30,...) are repeated ten times during each hundred
    and for ten times. Thus each one is repeated a total of a hundred times.

    The word hundred is repeated total of 900 times.

    And finally "and" is repeated every time hundred is, but not during
    even hundreds. Thus it's repeated only 891 times.
*/


int main()
{
    // 1-9
    int oneToNine= 190*(3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4);
    // 10-19
    int teens= 10*(3 + 6 + 6 + 8 + 8 + 7 + 8 + 8 + 6);
    // 30, 40, ..., 90
    int evenTens= 100*(6 + 6 + 6 + 5 + 5 + 7 + 6 + 6);
    // 100
    int hundreds= 900*7;
    // 1000
    int thousands= 1*8;
    // and
    int ands = 891*3;

    int letters = oneToNine + teens + evenTens + hundreds + thousands + ands + 3;
    printf("%d\n", letters);

    return 0;
}