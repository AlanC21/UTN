#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila DADA, MODELO, AUX;
    int valorTope, elemento;

    /// Inicializar pilas
    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&AUX);

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

    /// Verificar que MODELO no esté vacía (según el enunciado)
    if(pilavacia(&MODELO))
    {
        printf("\nError: La pila MODELO está vacia.\n");
        return 1;
    }

    /// Obtener el valor del tope de MODELO
    valorTope = tope(&MODELO);

    /// Eliminar de DADA todos los elementos iguales al tope de MODELO
    while(!pilavacia(&DADA))
    {
        elemento = desapilar(&DADA);
        if(elemento != valorTope)
        {
            apilar(&AUX, elemento);
        }
    }

    /// Restaurar la pila DADA sin los elementos eliminados
    while(!pilavacia(&AUX))
    {
        apilar(&DADA, desapilar(&AUX));
    }

    printf("\nValor del tope de MODELO: %d", valorTope);
    printf("\nPila DADA despues de eliminar elementos iguales al tope de MODELO:");
    mostrar(&DADA);

    return 0;
}
