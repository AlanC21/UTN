#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int total;
    printf("Ingrese el numero 1: ");
    scanf("%d", &num1);

    printf("Ingrese el numero 2: ");
    scanf("%d", &num2);

    if(num1 == num2) {
        total = num1 * num2;
        printf("El total de la multiplicacion es de: %d", total);
    } else if(num1 > num2) {
        total = num1 - num2;
        printf("El total de la resta es de: %d", total);
    } else {
        total = num1 + num2;
        printf("El total de la suma es de: %d", total);
    }

    return 0;
}
