#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 50

typedef struct {

    char nombre[MAX];
    char apellido1[MAX];
    char apellido2[MAX];
    int telefono;
    int edad;

} Persona;

void modificarPersona(Persona *p) {

    int opcion;

    printf("1. Nombre\n");
    printf("2. Apellido1\n");
    printf("3. Apellido2\n");
    printf("4. Telefono\n");
    printf("5. Edad\n");

    scanf("%d", &opcion);

    if (opcion == 1) {
        scanf("%s", p->nombre);
    } else if (opcion == 2) {
        scanf("%s", p->apellido1);
    } else if (opcion == 3) {
        scanf("%s", p->apellido2);
    } else if (opcion == 4) {
        scanf("%d", &p->telefono);
    } else if (opcion == 5) {
        scanf("%d", &p->edad);
    } else {
        printf("Opcion no valida\n");
    }
}

int main() {

    int a, b;

    printf("Introduce dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulo: %d\n", a % b);

    return 0;
}