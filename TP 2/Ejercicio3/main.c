#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int cant = 0;
    Pila dada, distintos, aux;
    inicpila(&dada);
    inicpila(&distintos);
    inicpila(&aux);

    printf("Ingresar la cantidad de numeros a ingresar: ");
    scanf("%d", &cant);

    for(int i = 0; i < cant; i++) {
        leer(&dada);
    }

    printf("Los numeros ingresados en la pila 'DADA' son: ");
    mostrar(&dada);

    for(int i = 0; i < cant; i++) {
        if(tope(&dada) != 8){
            apilar(&distintos, desapilar(&dada));
        } else {
            apilar(&aux, desapilar(&dada));
        }
    }

    printf("Los elementos distintos a 8 son: ");
    mostrar(&distintos);

    return 0;
}
