#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

void cargarKm(Pila pila){
    int i = 0;
    control == 's';
    int kmRecorrido = 0;

    while(control == 's'){
        printf("Ingrese el tramo recorrido (-1 para terminar el dia)");
        scanf("%d", &kmRecorrido);
        apilar(pila, kmRecorrido);
        i++;
        printf("Desea ingresar otro tramo? (s/n)");
        scanf("%c", &control);
    }
}

int mayorTramo(Pila pila){
    int mayor = 0;
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(&pila)){
        if(mayor < tope(&pila)){
            mayor = tope(&pila);
        }
        apilar(&aux, desapilar(&pila));
    }

    while(!pilavacia(&aux){
        apilar(&pila, desapilar(&aux));
    }

    return mayor;
}

int main()
{
    Pila pila;
    inicpila(&pila);

    return 0;
}
