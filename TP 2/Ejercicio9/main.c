#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
    /// Inicializamos variables
    Pila pilaA, pilaB, aux;

    /// Inicializamos las pilas
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&aux);

    /// Entrada de datos
    printf("Ingrese elementos para la pila A (terminar con 0): \n");
    int valor;
    do {
        scanf("%d", &valor);
        if (valor != 0) {
            apilar(&pilaA, valor);
        }
    } while (valor != 0);

    printf("Ingrese elementos para la pila B (terminar con 0): \n");
    do {
        scanf("%d", &valor);
        if (valor != 0) {
            apilar(&pilaB, valor);
        }
    } while (valor != 0);

    mostrar(&pilaA);
    mostrar(&pilaB);

    /// Verificamos cual pila tiene mas elementos
    while (!pilavacia(&pilaA) && !pilavacia(&pilaB)) {
        apilar(&aux, desapilar(&pilaA));
        apilar(&aux, desapilar(&pilaB));
    }

    if (pilavacia(&pilaA) && pilavacia(&pilaB)) {
        printf("\nLas pilas A y B tienen la misma cantidad de elementos.\n");
    } else if (pilavacia(&pilaA)) {
        printf("\nLa pila B tiene mas elementos que la pila A.\n");
    } else {
        printf("\nLa pila A tiene mas elementos que la pila B.\n");
    }

    return 0;
}
