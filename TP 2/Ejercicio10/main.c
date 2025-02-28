#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila A, B, auxA, auxB;
    int sonIguales = 1; /// Flag lógico, no contador
    int elementoA, elementoB;

    /// Inicializar pilas
    inicpila(&A);
    inicpila(&B);
    inicpila(&auxA);
    inicpila(&auxB);

    /// Cargar pila A
    printf("Cargando pila A:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&A);
    while(tope(&A) != -1)
    {
        leer(&A);
    }
    desapilar(&A);

    /// Cargar pila B
    printf("\nCargando pila B:\n");
    printf("Ingrese valores (terminar con -1):\n");
    leer(&B);
    while(tope(&B) != -1)
    {
        leer(&B);
    }
    desapilar(&B);

    printf("\nPila A original:");
    mostrar(&A);
    printf("\nPila B original:");
    mostrar(&B);

    /// Comparamos las pilas sin usar contadores
    while(!pilavacia(&A) && !pilavacia(&B) && sonIguales)
    {
        elementoA = desapilar(&A);
        elementoB = desapilar(&B);

        if(elementoA != elementoB)
        {
            sonIguales = 0; /// Las pilas no son iguales (Flag, no contador)
        }

        /// Guardamos los elementos en pilas auxiliares para restaurar después
        apilar(&auxA, elementoA);
        apilar(&auxB, elementoB);
    }

    /// Si una pila está vacía y la otra no, no son iguales
    if((!pilavacia(&A) && pilavacia(&B)) || (pilavacia(&A) && !pilavacia(&B)))
    {
        sonIguales = 0;
    }

    /// Restauramos las pilas originales
    while(!pilavacia(&auxA))
    {
        apilar(&A, desapilar(&auxA));
    }

    while(!pilavacia(&auxB))
    {
        apilar(&B, desapilar(&auxB));
    }

    /// Mostramos el resultado
    if(sonIguales)
    {
        printf("\nLas pilas A y B son completamente iguales.\n");
    }
    else
    {
        printf("\nLas pilas A y B NO son iguales.\n");
    }

    printf("\nPila A restaurada:");
    mostrar(&A);
    printf("\nPila B restaurada:");
    mostrar(&B);

    return 0;
}
