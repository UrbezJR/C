#include <stdio.h>

#define MAX 50

typedef struct {

    char nombre[MAX];
    char apellido1[MAX];
    char apellido2[MAX];
    int telefono;
    int edad;

} Persona;

void nuevaPersona(Persona *p) {

    printf("Nombre: ");
    scanf("%s", p->nombre);

    printf("Apellido1: ");
    scanf("%s", p->apellido1);

    printf("Apellido2: ");
    scanf("%s", p->apellido2);

    printf("Telefono: ");
    scanf("%d", &p->telefono);

    printf("Edad: ");
    scanf("%d", &p->edad);
}

void imprimirPersona(Persona p) {
    printf("\nPersona:\n");
    printf("Nombre: %s\n", p.nombre);
    printf("Apellido1: %s\n", p.apellido1);
    printf("Apellido2: %s\n", p.apellido2);
    printf("Telefono: %d\n", p.telefono);
    printf("Edad: %d\n", p.edad);
}

int main() {

    Persona p;

    nuevaPersona(&p);
    imprimirPersona(p);

    return 0;
}