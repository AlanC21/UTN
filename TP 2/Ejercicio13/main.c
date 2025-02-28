#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila DADA, LIMITE, MAYORES, MENORES;
    int elemento, valorLimite;

    /// Inicializar pilas
    inicpila(&DADA);
    inicpila(&LIMITE);
    inicpila(&MAYORES);
    inicpila(&MENORES);

    /// Cargar pila LIMITE
    printf("Cargando pila LIMITE:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&LIMITE);
    while(tope(&LIMITE) != -1)
    {
        leer(&LIMITE);
    }
    desapilar(&LIMITE);

    /// Cargar pila DADA
    printf("\nCargando pila DADA:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&DADA);
    while(tope(&DADA) != -1)
    {
        leer(&DADA);
    }
    desapilar(&DADA);

    printf("\nPila LIMITE original:");
    mostrar(&LIMITE);
    printf("\nPila DADA original:");
    mostrar(&DADA);

    /// Verificamos que LIMITE no esté vacía
    if(pilavacia(&LIMITE))
    {
        printf("\nError: La pila LIMITE está vacía.\n");
        return 1;
    }

    /// Obtener el valor del tope de LIMITE
    valorLimite = tope(&LIMITE);

    /// Separar los elementos de DADA
    while(!pilavacia(&DADA))
    {
        elemento = desapilar(&DADA);

        if(elemento >= valorLimite)
        {
            apilar(&MAYORES, elemento);
        }
        else
        {
            apilar(&MENORES, elemento);
        }
    }

    printf("\nValor del tope de LIMITE: %d", valorLimite);
    printf("\nPila MAYORES (elementos >= %d):", valorLimite);
    mostrar(&MAYORES);
    printf("\nPila MENORES (elementos < %d):", valorLimite);
    mostrar(&MENORES);

    return 0;
}
