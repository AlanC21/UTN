#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int nota1, nota2, nota3;
    float calificacionTotal, promedioNota;

    /// Entrada de datos
    printf("Ingrese tu primer calificacion: ");
    scanf("%d", &nota1);
    printf("Ingrese tu segunda calificacion: ");
    scanf("%d", &nota2);
    printf("Ingrese tu tercera calificacion: ");
    scanf("%d", &nota3);

    /// Calculamos el promedio
    calificacionTotal = nota1 + nota2 + nota3;
    promedioNota = calificacionTotal / 3;

    /// Verificamos si aprobo o reprobo e imprimimos
    if (promedioNota >= 7){
        printf("Estas aprobado. Tu promedio es de: %.2f", promedioNota);
    } else {
        printf("Estas reprobado. Tu promedio es de: %.2f", promedioNota);
    }

    return 0;
}
