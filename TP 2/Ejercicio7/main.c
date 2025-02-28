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

    for(int i = 0; i < (cant - 1); i++) {
        apilar(&aux1, desapilar(&origen));
    }

    apilar(&aux2, desapilar(&origen));

    for(int i = 0; i < (cant - 1); i++) {
        apilar(&origen, desapilar(&aux1));
    }

    apilar(&origen, desapilar(&aux2));

    printf("Los elementos de la pila origen son: ");
    mostrar(&origen);

    return 0;
}
