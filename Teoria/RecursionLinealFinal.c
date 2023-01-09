#include <stdio.h>
long maximoComunDivisor(long, long);
main(int argc, char *argv[])
{
    long a = 4454, b = 143052;
    printf("El m.c.d. de %ld y %ld es %ld\n", a, b, maximoComunDivisor(a, b));
}
long maximoComunDivisor(long a, long b)
{
    if (a == b)
    {
        return a;
    }
    else if (a < b)
    {
        return maximoComunDivisor(a, b - a);
    }
    else
    {
        return maximoComunDivisor(a - b, b);
    }
}