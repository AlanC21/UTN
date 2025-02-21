#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables (Usamos array para guardar varios valores)
    int num[15], positivo[15], contador = 0;

    /// Iteramos para guardar los numeros en positivos (Si son negativos los pasamos a positivo)
    for (int i = 0; i < 15; i++){
        printf ("Ingrese el numero %d: ", i + 1);
        scanf ("%d", &num[i]);

        if (num[i] >= 1){
            positivo[contador++] = num[i];
        }
        else if (num[i] <= 1){
            positivo[contador++] = num[i] * -1;
        }
    }

    /// Imprimimos los numeros positivos
    printf("Los numeros positivos son: \n");

    for (int i = 0; i < contador; i++) {
        printf("%d, ", positivo[i]);
    }
    return 0;
}
