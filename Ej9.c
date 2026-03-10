#include <stdio.h>
#include <stdbool.h>
#include "persona.h"

#define MAX_PERSONAS 5
#define MAX_ARCHIVO 100

int main() {

    Persona agenda[MAX_PERSONAS];
    int numPersonas = 0;
    int opcion;
    int i;
    int p1, p2;
    char nombreArchivo[MAX_ARCHIVO];
    FILE *f;

    do {
        printf("\n--- AGENDA ---\n");
        printf("1. Agregar persona\n");
        printf("2. Mostrar personas\n");
        printf("3. Modificar persona\n");
        printf("4. Verificar personas\n");
        printf("5. Exportar personas\n");
        printf("6. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                if(numPersonas < MAX_PERSONAS) {
                    nuevaPersona(&agenda[numPersonas]);
                    numPersonas++;
                } else {
                    printf("Agenda llena\n");
                }
                break;

            case 2:
                for(i = 0; i < numPersonas; i++) {
                    printf("\nPersona %d:\n", i);
                    imprimirPersona(agenda[i]);
                }
                break;

            case 3:
                printf("Introduce el numero de persona a modificar: ");
                scanf("%d", &i);

                if(i >= 0 && i < numPersonas) {
                    modificarPersona(&agenda[i]);
                } else {
                    printf("Indice no valido\n");
                }
                break;

            case 4:
                printf("Introduce indice de la primera persona: ");
                scanf("%d", &p1);

                printf("Introduce indice de la segunda persona: ");
                scanf("%d", &p2);

                if(p1 >= 0 && p1 < numPersonas && p2 >= 0 && p2 < numPersonas) {

                    if(sonIguales(agenda[p1], agenda[p2])) {
                        printf("Las personas son iguales\n");
                    } else {
                        printf("Las personas son diferentes\n");
                    }

                } else {
                    printf("Indices no validos\n");
                }
                break;

            case 5:
                printf("Nombre del archivo: ");
                scanf("%s", nombreArchivo);

                f = fopen(nombreArchivo, "w");

                if(f == NULL) {
                    printf("Error al abrir el archivo\n");
                } else {

                    for(i = 0; i < numPersonas; i++) {
                        guardarPersona(f, agenda[i]);
                    }

                    fclose(f);
                    printf("Personas guardadas correctamente\n");
                }

                break;

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida\n");
        }

    } while(opcion != 6);

    return 0;
}