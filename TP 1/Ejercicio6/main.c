#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    float cantidadHoras;
    int salarioSemanal;
    int salarioTotal;
    int salarioExtra;
    int horasExtras;

    /// Entrada de datos
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &cantidadHoras);

    /// Calculamos el salario segun la cantidad de horas e imprimimos
    if(cantidadHoras <= 40) {
        salarioSemanal = 300 * cantidadHoras;
        printf("El salario es de: %d", salarioSemanal);
    } else if(cantidadHoras > 40) {
        horasExtras = cantidadHoras - 40;
        salarioSemanal = 300 * cantidadHoras;
        salarioExtra = horasExtras * 400;
        salarioTotal = salarioExtra + salarioSemanal;

        printf("El salario es de: %d", salarioTotal);
    }

    return 0;
}
