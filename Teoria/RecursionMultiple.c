#include <stdio.h>
long Fibonacci(int);
int main()
{
    int n = 30;
    printf("El %dº número de Fibonacci es %ld\n", n, Fibonacci(n));
}
long Fibonacci(int n)
{
    if (1 == n || 2 == n)
    {
        return 1;
    }
    else
    {
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
    }
}