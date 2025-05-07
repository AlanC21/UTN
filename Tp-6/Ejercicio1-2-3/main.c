#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const FILE *archivo = "nombres.bin";

void mostrarArchivos(char nombreArchivo[30]){
    FILE *archivo = fopen(nombreArchivo, "r");

    if(archivo == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }

    char nombre[30];
    while(fgets(nombre, sizeof(nombre), archivo) != NULL){
        printf("%s", nombre);
    }
    fclose(archivo);
}

void ingresarNombre(char nombreArchivo[30]){
    FILE *archivo = fopen(nombreArchivo, "a");

    if(archivo == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }

    char nombre[30];
    char control = 's';

    while(control == 's'){
        printf("Ingrese un nombre: ");
        fflush(stdin);
        gets(nombre);
        fprintf(archivo, "%s\n", nombre);
        printf("Desea ingresar otro nombre? (s/n): ");
        fflush(stdin);
        scanf("%c", &control);
    }

    fclose(archivo);
}

void cantidadRegistros(char nombreArchivo[30]){
    FILE *archivo = fopen(nombreArchivo, "r");

    if(archivo == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }

    char nombre[30];
    int contador = 0;
    while(fgets(nombre, sizeof(nombre), archivo) != NULL){
        contador++;
    }
    fclose(archivo);
    printf("Cantidad de registros: %d\n", contador);
}

int main()
{   
    int opcion;
    do {
        printf("\t\t\t.::Menu::.\n");
        printf("1. Ingresar nombre\n");
        printf("2. Mostrar nombres\n");
        printf("3. Cantidad de registros\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                ingresarNombre(archivo);
                system("cls");
                break;
            case 2:
                mostrarArchivos(archivo);
                system("pause");
                system("cls");
                break;
            case 3:
                cantidadRegistros(archivo);
                system("pause");
                system("cls");
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while (opcion != 4);
    return 0;
}
