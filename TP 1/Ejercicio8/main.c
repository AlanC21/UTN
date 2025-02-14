#include <stdio.h>
#include <stdlib.h>

/// Definimos los descuentos
#define DESCUENTO_3 0.20
#define DESCUENTO 0.10

int main()
{
    /// Declaramos las variables
    int cantidadCamisas;
    float cantidadAPagar;
    float descuentoTotal;

    /// Entrada de datos
    printf("Ingrese la cantidad de camisas: ");
    scanf("%d", &cantidadCamisas);

    printf("Ingrese cantidad a pagar: ");
    scanf("%f", &cantidadAPagar);

    /// Verificamos si se aplica el descuento del 20% o 10% e imprimos
    if(cantidadCamisas >= 3) {
        descuentoTotal = cantidadAPagar * DESCUENTO_3;
        cantidadAPagar = cantidadAPagar - descuentoTotal;

        printf("Se hace un descuento de: %.2f (20%%) y la cantidad a pagar es: %.2f", descuentoTotal, cantidadAPagar);
    } else {
        descuentoTotal = cantidadAPagar * DESCUENTO;
        cantidadAPagar = cantidadAPagar - descuentoTotal;

        printf("Se hace un descuento de: %.2f (10%%) y la cantidad a pagar es: %.2f", descuentoTotal, cantidadAPagar);
    }

    return 0;
}
