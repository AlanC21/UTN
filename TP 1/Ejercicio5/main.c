#include <stdio.h>
#include <stdlib.h>

/// Definimos el descuento del 20%
#define DESCUENTO_TOTAL 0.20

int main()
{
    /// Declaramos variables
    float compraTotal;
    float precioDescuento;

    /// Entrada de datos
    printf("Ingrese el total de la compra: ");
    scanf("%f", &compraTotal);

    /// Verificamos si se aplica el descuento e imprimimos
    if(compraTotal >= 5000) {
        precioDescuento = compraTotal * DESCUENTO_TOTAL;
        compraTotal = compraTotal - precioDescuento;

        printf("Se hace un descuento de: %.2f y el precio total queda de: %.2f", precioDescuento, compraTotal);
    } else {
        printf("No se hace descuento, el precio es de: %.2f", compraTotal);
    }

    return 0;
}
