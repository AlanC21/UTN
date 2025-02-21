#include <stdio.h>
#include <stdlib.h>

///Incluimos libreria para poder usar pow() (Sacar exponente del numero)
#include <math.h>

int main()
{
    ///Declarar las variables
    int num = 0, cubo = 0, cuarta = 0;

    /// Iteramos para ingresar los numeros
    for (int i = 0; i < 10; i++){

    printf ("Ingrese el numero %d: ", i + 1);
    scanf ("%d", &num);


    /// Calculamos los exponentes de los numeros
    cubo = pow(num, 3);
    cuarta = pow(num, 4);

    ///Imprimimos los valores
    printf("El resultado del numero %d: cubo: %d y cuarta: %d \n\n", num, cubo, cuarta);
    }

    return 0;
}
