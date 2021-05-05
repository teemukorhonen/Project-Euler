#include <math.h>
#include <stdio.h>









int main()
{
    int count = 0;
    int weekday = 2;
    int year = 1;
    while (year < 101)
    {
        // January
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        // February
        if (year % 4 == 0) weekday=(weekday+29)%7;
        else weekday=(weekday+28)%7;
        if (weekday == 0) count++;

        // March
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        // April
        weekday = (weekday+30)%7;
        if (weekday == 0) count++;

        // May
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        // June
        weekday = (weekday+30)%7;
        if (weekday == 0) count++;

        // July
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        // August
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        // September
        weekday = (weekday+30)%7;
        if (weekday == 0) count++;

        // October
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        // November
        weekday = (weekday+30)%7;
        if (weekday == 0) count++;

        // December
        weekday = (weekday+31)%7;
        if (weekday == 0) count++;

        year++;
    }

    printf("Number of sundays on the first of month during the 20th century was %d\n", count);

}