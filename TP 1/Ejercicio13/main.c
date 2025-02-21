#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos las variables (Usamos array para guardar varios valores)
    int num[10], positivos[10], contador = 0;

    /// Iteramos los numeros y despues los guardamos en positivos
    for (int i = 0; i < 10; i++){
        printf ("Ingrese el numero %d: ", i + 1);
        scanf ("%d", &num[i]);

        if (num[i] >= 1){
            positivos[contador++] = num[i];
        }
    }

    /// Imprimimos los numeros positivos
    printf("Los numeros positivos son: \n");

    for (int i = 0; i < contador; i++) {
        printf("%d, ", positivos[i]);
    }
    return 0;
}
