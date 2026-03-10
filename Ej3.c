#include <stdio.h>

int main() {

    int num1, num2;

    printf("Introduce dos numeros: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1; i++) {

        int resultado = num2 * i;

        printf("%d * %d = %d\n", num2, i, resultado);
    }

    return 0;
}