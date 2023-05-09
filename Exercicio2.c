/*2.Faça um programa que peça dois números inteiros e 
gere os números pares que estão
no intervalo entre eles.*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Usando WHILE
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Números pares entre %d e %d: ", num1, num2);
    int i = num1;
    while (i <= num2) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    // Usando FOR
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Números pares entre %d e %d: ", num1, num2);
    for (int j = num1; j <= num2; j++) {
        if (j % 2 == 0) {
            printf("%d ", j);
        }
    }
    printf("\n");

    return 0;
}
