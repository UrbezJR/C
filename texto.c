#include <stdio.h>
#include <string.h>
#include "texto.h"

Texto nuevoTexto() {

    Texto t;

    printf("Introduce texto: ");
    scanf("%s", t.letras);

    t.longitud = strlen(t.letras);

    return t;
}

void mostrarTexto(Texto t) {

    printf("Texto: %s\n", t.letras);
    printf("Longitud: %d\n", t.longitud);
}

bool sonIguales1(Texto a, Texto b) {

    if (a.longitud != b.longitud)
        return false;

    for (int i = 0; i < a.longitud; i++) {
        if (a.letras[i] != b.letras[i])
            return false;
    }

    return true;
}

bool sonIguales2(Texto a, Texto b) {

    return strcmp(a.letras, b.letras) == 0;
}

Texto clonar1(Texto t) {

    Texto r;

    for (int i = 0; i <= t.longitud; i++) {
        r.letras[i] = t.letras[i];
    }

    r.longitud = t.longitud;

    return r;
}

Texto clonar2(Texto t) {

    Texto r;

    strcpy(r.letras, t.letras);
    r.longitud = t.longitud;

    return r;
}

Texto concatenar(Texto a, Texto b) {

    Texto r;

    if (a.longitud + b.longitud > TEXTO_MAX_LEN) {
        printf("Error: el texto supera el tamaño máximo\n");
        return a;
    }

    strcpy(r.letras, a.letras);
    strcat(r.letras, b.letras);

    r.longitud = strlen(r.letras);

    return r;
}

bool esPalindromo(Texto t) {

    int i = 0;
    int j = t.longitud - 1;

    while (i < j) {

        if (t.letras[i] != t.letras[j])
            return false;

        i++;
        j--;
    }

    return true;
}

Texto leerDesdeFichero(char nombre[]) {

    Texto t;

    FILE *f = fopen(nombre, "r");

    if (f == NULL) {
        printf("Error al abrir fichero\n");
        t.letras[0] = '\0';
        t.longitud = 0;
        return t;
    }

    fgets(t.letras, TEXTO_MAX_LEN + 1, f);

    fclose(f);

    t.longitud = strlen(t.letras);

    return t;
}

void guardarEnFichero(char nombre[], Texto t) {

    FILE *f = fopen(nombre, "w");

    if (f == NULL) {
        printf("Error al crear fichero\n");
        return;
    }

    fprintf(f, "%s", t.letras);

    fclose(f);
}