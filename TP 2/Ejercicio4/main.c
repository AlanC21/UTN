#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int cant = 0;
    Pila origen, destino;

    inicpila(&origen);
    inicpila(&destino);

    printf("Ingresar la cantidad de numeros a ingresar: ");
    scanf("%d", &cant);

    for(int i = 0; i < cant; i++) {
        leer(&origen);
    }

    printf("Los elementos en la pila origen son: ");
    mostrar(&origen);

    // Transferir directamente de origen a destino
    while(!pilavacia(&origen)) {
        apilar(&destino, desapilar(&origen));
    }

    // Transferir de destino a origen para mantener el orden
    while(!pilavacia(&destino)) {
        apilar(&origen, desapilar(&destino));
    }

    // Transferir de origen a destino nuevamente
    while(!pilavacia(&origen)) {
        apilar(&destino, desapilar(&origen));
    }

    printf("Los elementos en la pila destino son: ");
    mostrar(&destino);

    return 0;
}
