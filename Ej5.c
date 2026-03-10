#include <stdio.h>

#define MAX 50

int main() {

    char nombre[MAX];
    char apellido1[MAX];
    char apellido2[MAX];
    int telefono;
    int edad;

    printf("Nombre: ");
    scanf("%s", nombre);

    printf("Apellido1: ");
    scanf("%s", apellido1);

    printf("Apellido2: ");
    scanf("%s", apellido2);

    printf("Telefono: ");
    scanf("%d", &telefono);

    printf("Edad: ");
    scanf("%d", &edad);

    printf("\nPersona:\n");
    printf("Nombre: %s\n", nombre);
    printf("Apellido1: %s\n", apellido1);
    printf("Apellido2: %s\n", apellido2);
    printf("Telefono: %d\n", telefono);
    printf("Edad: %d\n", edad);

    return 0;
}