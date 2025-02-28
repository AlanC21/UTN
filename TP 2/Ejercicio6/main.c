#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int cant = 0;
    Pila origen, aux1, aux2;
    inicpila(&origen);
    inicpila(&aux1);
    inicpila(&aux2);

    printf("Ingresar la cantidad de numeros a ingresar: ");
    scanf("%d", &cant);

    for(int i = 0; i < cant; i++) {
        leer(&origen);
    }

    printf("Los elementos de la pila origen son: ");
    mostrar(&origen);

    apilar(&aux1, desapilar(&origen));

    while(!pilavacia(&origen)) {
        apilar(&aux2, desapilar(&origen));
    }

    apilar(&origen, desapilar(&aux1));

    while(!pilavacia(&aux2)) {
        apilar(&origen, desapilar(&aux2));
    }

    printf("Los elementos de la pila origen son: ");
    mostrar(&origen);

    return 0;
}
