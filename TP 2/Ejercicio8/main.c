#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila mazo, jugador1, jugador2;
    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);

    for(int i = 0; i < 50; i++) {
        apilar(&mazo, i + 1);
    }

    for(int i = 0; i < 50; i++) {
        if(i % 2 == 0){
            apilar(&jugador1, desapilar(&mazo));
        } else {
            apilar(&jugador2, desapilar(&mazo));
        }
    }

    printf("La cantidad de cartas del Jugador 1 es: ");
    mostrar(&jugador1);

    printf("La cantidad de cartas del Jugador 2 es: ");
    mostrar(&jugador2);

    return 0;
}
