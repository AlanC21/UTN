#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila DADA, AUX1, AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    for(int i = 0; i < 5; i++) {
        leer(&DADA);
    }

    printf("Los elementos de la pila 'DADA' son: ");
    mostrar(&DADA);


    for(int i = 0; i < 3; i++) {
        apilar(&AUX1, desapilar(&DADA));
    }

    while(!pilavacia(&DADA)){
        apilar(&AUX2, desapilar(&DADA));
    }

    printf("Los elementos de la pila 'AUX1' son: ");
    mostrar(&AUX1);
    printf("Los elementos de la pila 'AUX2' son: ");
    mostrar(&AUX2);


    return 0;
}
