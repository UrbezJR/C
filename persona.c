#include "personas.h"
#include <string.h>

/***** IMPLEMENTACIÓN *****/

void nuevaPersona(Persona *p) {
    printf("Nombre: ");
    scanf("%s", p->nombre);

    printf("Apellido 1: ");
    scanf("%s", p->apellido1);

    printf("Apellido 2: ");
    scanf("%s", p->apellido2);

    printf("Telefono: ");
    scanf("%d", &p->telefono);

    printf("Edad: ");
    scanf("%d", &p->edad);
}

void imprimirPersona(Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Apellido 1: %s\n", p.apellido1);
    printf("Apellido 2: %s\n", p.apellido2);
    printf("Telefono: %d\n", p.telefono);
    printf("Edad: %d\n", p.edad);
}

void modificarPersona(Persona *p) {
    int opcion;

    printf("Que campo deseas modificar?\n");
    printf("1. Nombre\n");
    printf("2. Apellido 1\n");
    printf("3. Apellido 2\n");
    printf("4. Telefono\n");
    printf("5. Edad\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Nuevo nombre: ");
            scanf("%s", p->nombre);
            break;
        case 2:
            printf("Nuevo apellido 1: ");
            scanf("%s", p->apellido1);
            break;
        case 3:
            printf("Nuevo apellido 2: ");
            scanf("%s", p->apellido2);
            break;
        case 4:
            printf("Nuevo telefono: ");
            scanf("%d", &p->telefono);
            break;
        case 5:
            printf("Nueva edad: ");
            scanf("%d", &p->edad);
            break;
        default:
            printf("Opcion no valida\n");
    }
}

bool sonIguales(Persona a, Persona b) {
    return (
        strcmp(a.nombre, b.nombre) == 0 &&
        strcmp(a.apellido1, b.apellido1) == 0 &&
        strcmp(a.apellido2, b.apellido2) == 0 &&
        a.telefono == b.telefono &&
        a.edad == b.edad
    );
}

void guardarPersona(FILE *f, Persona p) {
    fprintf(f, "Persona:\n");
    fprintf(f, "Nombre: %s\n", p.nombre);
    fprintf(f, "Apellido 1: %s\n", p.apellido1);
    fprintf(f, "Apellido 2: %s\n", p.apellido2);
    fprintf(f, "Telefono: %d\n", p.telefono);
    fprintf(f, "Edad: %d\n", p.edad);
    fprintf(f, "\n");
}