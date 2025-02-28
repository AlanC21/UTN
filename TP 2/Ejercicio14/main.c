#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila DADA, PAR, IMPAR, AUX, TEMP;
    int esPar = 1; // 1 = par, 0 = impar (asumimos par al inicio)
    int elemento;

    /// Inicializar pilas
    inicpila(&DADA);
    inicpila(&PAR);
    inicpila(&IMPAR);
    inicpila(&AUX);
    inicpila(&TEMP);

    /// Cargar pila DADA
    printf("Cargando pila DADA:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&DADA);
    while(tope(&DADA) != -1)
    {
        leer(&DADA);
    }
    desapilar(&DADA);

    printf("\nPila DADA original:");
    mostrar(&DADA);

    /// Desapilamos de a dos elementos, si queda uno al final, es impar
    while(!pilavacia(&DADA))
    {
        elemento = desapilar(&DADA);
        apilar(&AUX, elemento);

        /// Si podemos desapilar un segundo elemento, lo movemos también
        if(!pilavacia(&DADA))
        {
            elemento = desapilar(&DADA);
            apilar(&AUX, elemento);
        }
        else
        {
            /// Si no hay un segundo elemento, la cantidad es impar
            esPar = 0;
        }
    }

    /// Restauramos la pila DADA
    while(!pilavacia(&AUX))
    {
        apilar(&TEMP, desapilar(&AUX));
    }

    while(!pilavacia(&TEMP))
    {
        apilar(&DADA, desapilar(&TEMP));
    }

    /// Basado en si es par o impar, movemos el tope a la pila correspondiente
    if(!pilavacia(&DADA))
    {
        if(esPar)
        {
            apilar(&PAR, desapilar(&DADA));
            printf("\nLa cantidad de elementos en la pila DADA es PAR.");
        }
        else
        {
            apilar(&IMPAR, desapilar(&DADA));
            printf("\nLa cantidad de elementos en la pila DADA es IMPAR.");
        }
    }
    else
    {
        printf("\nLa pila DADA está vacia.");
    }

    printf("\nPila DADA despues de mover el tope:");
    mostrar(&DADA);
    printf("\nPila PAR:");
    mostrar(&PAR);
    printf("\nPila IMPAR:");
    mostrar(&IMPAR);

    return 0;
}
