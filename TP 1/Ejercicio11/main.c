#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Declaramos variables

    int i;
    float suma, nota, promedio;

    /// Iteramos la nota para sumarlas
    for (i = 0; i < 7; i++) {
        printf("Ingrese la nota numero: %d: ", i + 1);
        scanf("%f", &nota);

        suma += nota;
    }

    /// Sacamos promedio de las notas
    promedio = suma / 7;

    /// Imprimimos el promedio
    printf("El promedio del alumno es: %.2f\n", promedio);
    return 0;
}
