#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int cant = 0;
    Pila origen, destino;
    inicpila(&origen);
    inicpila(&destino);

    printf("Ingresar la cantidad de numeros a ingresar en la pila: ");
    scanf("%d", &cant);

    for(int i = 0; i < cant; i++) {
        leer(&origen);
    }

    printf("Los numeros ingresados en la pila son: ");
    mostrar(&origen);

    for(int i = 0; i < cant; i++) {
        apilar(&destino, desapilar(&origen));
    }

    printf("Los numeros apilados desde origen a destino son: ");
    mostrar(&destino);

    return 0;
}
