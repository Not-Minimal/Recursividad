#include <stdio.h>
void NumerosNaturales(int inicio, int final)
{
    if (inicio < final)
    {
        printf("%d\n", inicio);
        inicio = (inicio + 1);
        NumerosNaturales(inicio, final);
    }
}

int main()
{
    int inicio, final;
    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);
    printf("Ingrese el numero final: ");
    scanf("%d", &final);
    NumerosNaturales(inicio + 1, final);
    return 0;
}
