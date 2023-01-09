#include <stdio.h>
int sumatoria(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n + sumatoria(n - 1);
}

int main()
{
    int n;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    printf("La sumatoria es: %d\n", sumatoria(n));
}
