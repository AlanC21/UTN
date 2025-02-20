#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    float cantidadHoras;
    int salarioSemanal;
    int salarioExtra;
    int horasExtras;

    /// Entrada de datos
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &cantidadHoras);

    /// Calculamos el salario segun la cantidad de horas e imprimimos
    if(cantidadHoras > 40) {
        horasExtras = cantidadHoras - 40;
        salarioExtra = horasExtras * 400;
        salarioSemanal = (300 * 40) + salarioExtra;
    } else {
        salarioSemanal = 300 * cantidadHoras;
    }

    printf("El salario es de: %d", salarioSemanal);

    return 0;
}
