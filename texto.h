#ifndef TEXTO_H
#define TEXTO_H

#include <stdbool.h>

/***** EXPORTA *****/

#define TEXTO_MAX_LEN 100

typedef struct {
    char letras[TEXTO_MAX_LEN + 1]; 
    int longitud;
} Texto;

Texto nuevoTexto();
void mostrarTexto(Texto t);

bool sonIguales1(Texto a, Texto b);
bool sonIguales2(Texto a, Texto b);

Texto clonar1(Texto t);
Texto clonar2(Texto t);

Texto concatenar(Texto a, Texto b);

bool esPalindromo(Texto t);

Texto leerDesdeFichero(char nombre[]);
void guardarEnFichero(char nombre[], Texto t);

#endif