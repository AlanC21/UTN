#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int cantA = 0, cantB = 0;
    Pila pilaA, pilaB;
    inicpila(&a);
    inicpila(&b);

    printf("Ingrese la cantidad de numeros a ingresar en pila A: ");
    scanf("%d", &cantA);

    printf("Ingrese la cantidad de numeros a ingresar en pila B: ");
    scanf("%d", &cantB);

    for(int i = 0; i < cantA; i++) {
        leer(&pilaA));
    }

    for(int i = 0; i < cantB; i++) {
        leer(&pilaB));
    }

    printf("Los elementos de la Pila A son: ");
    mostrar(&pilaA);

    printf("Los elementos de la Pila B son: ");
    mostrar(&pilaB);



    return 0;
}
