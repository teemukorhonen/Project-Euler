#include <stdio.h>
#define DIM 100006
typedef int Montgomery[DIM];

int n;
Montgomery F;
long long Sum = 0;

void Product(Montgomery x, int n)
{
    // x <- x*n
    int t = 0;
    for (int i = 1; i <= x[0]; i++, t /= 10)
    {
        t += x[i] * n;
        x[i] = t % 10;
    }
    for (; t; t /= 10)
        x[++x[0]] = t % 10;
}

void Factorial()
{
    // Initialisation
    F[0] = 1;
    for (int i = 1; i <= DIM; i++)
        F[i] = 0;
    F[1] = 1;

    // Multiplying Montgomery number by small number
    for (int i = 2; i <= 100; i++)
        Product(F, i);
}

void FindSum()
{
    for (int i = 1; i <= F[0]; i++)
        Sum += F[i];
    printf("%lld\n", Sum);
}

int main()
{
    Factorial();
    FindSum();
    return 0;
}