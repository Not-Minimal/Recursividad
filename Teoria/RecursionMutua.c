#include <stdio.h>
int par(int n);
int impar(int n);
int main()
{
    int n = 31;
    if (par(n))
    {
        printf("El número es par\n");
    }
    else
    {
        printf("El número es impar\n");
    }
}
int par(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (impar(n - 1));
    }
}
int impar(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (par(n - 1));
    }
}