#include <stdio.h>
int factorial(int numero)
{
    if (numero > 1)
    {
        return (numero * factorial(numero - 1));
    }
    else
    {
        return (1);
    }
}
int main()
{
    int n;
    printf("Introduce el número: ");
    scanf("%d", &n);
    printf("El factorial es %d\n", factorial(n));
}