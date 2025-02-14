#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int num1, num2;

    /// Entrada de daots
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    /// Verificamos cual es mayor e imprimimos
    if(num1 > num2) {
        printf("De forma ascendente: %d/%d", num1, num2);
    } else if (num1 < num2) {
        printf("De forma ascendente: %d/%d", num2, num1);
    } else {
        printf("Son iguales: %d/%d", num1, num2);
    }

    return 0;
}
