#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numHombres, numMujeres, totalEstudiantes;
    float porcentajeHombres, porcentajeMujeres;

    /// Entrada de datos
    printf("Ingresar la cantidad de hombres: ");
    scanf("%d", &numHombres);
    printf("Ingresar la cantidad de mujeres: ");
    scanf("%d", &numMujeres);

    /// Calculos
    totalEstudiantes = numHombres + numMujeres;
    porcentajeHombres = (float)numHombres / totalEstudiantes * 100;
    porcentajeMujeres = (float)numMujeres / totalEstudiantes * 100;

    /// Muestra el resultado
    printf("\nResultados:\n");
    printf("Total de estudiantes: %d\n", totalEstudiantes);
    printf("Porcentaje de hombres: %.2f%%\n", porcentajeHombres);
    printf("Porcentaje de mujeres: %.2f%%\n", porcentajeMujeres);

    return 0;
}
