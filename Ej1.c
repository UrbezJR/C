#include <stdio.h>

int main() {

    int a, b;

    printf("Introduce numero entero: ");
    scanf("%d", &a);

    printf("Introduce otro numero entero: ");
    scanf("%d", &b);

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulo: %d\n", a % b);

    return 0;
}