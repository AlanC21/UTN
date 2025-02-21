#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos las variables
    int num = 0;
    float minNota = 10, suma = 0, promedio = 0;

    /// Iteramos para guardar los numeros y sumarlos.
    for(int i = 0; i < 40; i++) {
        printf("Ingrese nota %d: ",i + 1);
        scanf("%d", &num);

        suma += num;

        if (num < minNota){
            minNota = num;
        }
    }

    /// Calculamos el promedio
    promedio = suma / 40;

    /// Imprimimos el promedio
    printf("El promedio general del curso es de: %.2f \nLa nota mas baja es: %.2f\n", promedio, minNota);
    return 0;
}
