#include <stdio.h>

#define MAX 50

void nuevaPersona(char nombre[MAX], char ap1[MAX], char ap2[MAX], int *tel, int *edad) {

    printf("Nombre: ");
    scanf("%s", nombre);

    printf("Apellido1: ");
    scanf("%s", ap1);

    printf("Apellido2: ");
    scanf("%s", ap2);

    printf("Telefono: ");
    scanf("%d", tel);

    printf("Edad: ");
    scanf("%d", edad);
}

void imprimirPersona(char nombre[MAX], char ap1[MAX], char ap2[MAX], int tel, int edad) {

    printf("\nPersona:\n");
    printf("Nombre: %s\n", nombre);
    printf("Apellido1: %s\n", ap1);
    printf("Apellido2: %s\n", ap2);
    printf("Telefono: %d\n", tel);
    printf("Edad: %d\n", edad);
}

int main() {

    char nombre[MAX], ap1[MAX], ap2[MAX];
    int tel, edad;

    nuevaPersona(nombre, ap1, ap2, &tel, &edad);
    imprimirPersona(nombre, ap1, ap2, tel, edad);

    return 0;
}