#include <stdio.h>
#include "pila.h"

int main()
{
    Pila DADA, MODELO, AUX, MODELO_AUX, TEMP;
    int elementoDada, elementoModelo, eliminar;

    /// Inicializar pilas
    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&AUX);
    inicpila(&MODELO_AUX);
    inicpila(&TEMP);

    /// Cargar pila MODELO
    printf("Cargando pila MODELO:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&MODELO);
    while(tope(&MODELO) != -1)
    {
        leer(&MODELO);
    }
    desapilar(&MODELO);

    /// Cargar pila DADA
    printf("\nCargando pila DADA:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&DADA);
    while(tope(&DADA) != -1)
    {
        leer(&DADA);
    }
    desapilar(&DADA);

    printf("\nPila MODELO original:");
    mostrar(&MODELO);
    printf("\nPila DADA original:");
    mostrar(&DADA);

    /// Revisar cada elemento de DADA
    while(!pilavacia(&DADA))
    {
        elementoDada = desapilar(&DADA);
        eliminar = 0;

        /// Copiar MODELO a MODELO_AUX para no perder los elementos
        while(!pilavacia(&MODELO))
        {
            apilar(&MODELO_AUX, desapilar(&MODELO));
        }

        /// Revisar si elementoDada está en la pila MODELO
        while(!pilavacia(&MODELO_AUX))
        {
            elementoModelo = desapilar(&MODELO_AUX);
            apilar(&TEMP, elementoModelo);

            if(elementoModelo == elementoDada)
            {
                eliminar = 1;
            }
        }

        /// Restaurar MODELO
        while(!pilavacia(&TEMP))
        {
            apilar(&MODELO, desapilar(&TEMP));
        }

        /// Si el elemento no debe ser eliminado, lo guardamos en AUX
        if(!eliminar)
        {
            apilar(&AUX, elementoDada);
        }
    }

    /// Restaurar la pila DADA sin los elementos eliminados
    while(!pilavacia(&AUX))
    {
        apilar(&DADA, desapilar(&AUX));
    }

    printf("\nPila DADA después de eliminar los elementos que existen en MODELO:");
    mostrar(&DADA);

    return 0;
}
