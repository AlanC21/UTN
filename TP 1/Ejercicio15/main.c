#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, producto = 0;

    printf("Ingresar un numero para mostrar la tabla de multiplicar: ");
    scanf("%d", &num);

    printf("La tabla de multiplicar del numero %d\n", num);
    for(int i = 1; i <= 10; i++) {
        producto = num * i;

        printf("%d * %d = %d\n", num, i, producto);
    }

    return 0;
}
