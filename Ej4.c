#include <stdio.h>

int main() {

    int n;
    printf("Introduce un numero: ");
    scanf("%d", &n);

    int suma = n, max = n, min = n;

    while (n % 2 != 0) {
        printf("Introduce un numero: ");
        scanf("%d", &n);
        suma += n;

        if (n > max) {
             max = n;
        }

        if (n < min) {
             min = n;
        }
    }

    printf("Suma: %d\n", suma);
    printf("Maximo: %d\n", max);
    printf("Minimo: %d\n", min);

    return 0;
}