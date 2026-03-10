#ifndef PERSONA_H
#define PERSONA_H

#include <stdio.h>
#include <stdbool.h>

/***** EXPORTA *****/

#define MAX 50

typedef struct {
    char nombre[MAX];
    char apellido1[MAX];
    char apellido2[MAX];
    int telefono;
    int edad;
} Persona;

void nuevaPersona(Persona *p);
void imprimirPersona(Persona p);
void modificarPersona(Persona *p);
bool sonIguales(Persona a, Persona b);
void guardarPersona(FILE *f, Persona p);

#endif