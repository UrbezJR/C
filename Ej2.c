#include <stdio.h>

int main() {

    float a, b;
    char op;

    printf("Introduce dos numeros reales: ");
    scanf("%f %f\n", &a, &b);

    printf("Introduce operador (+ - * /): ");
    scanf("%c", &op);

    if (op == '+') {
        printf("Resultado: %f\n", a + b);
    } else if (op == '-') {
        printf("Resultado: %f\n", a - b);
    } else if (op == '*') {
        printf("Resultado: %f\n", a * b);
    } else if (op == '/') {
        printf("Resultado: %f\n", a / b);
    } else {
        printf("Operador no valido\n");
    }

    return 0;
}