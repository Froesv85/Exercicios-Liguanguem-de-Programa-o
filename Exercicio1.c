/*1.Faça um programa que exiba na tela os números de 1 à 10.*/

#include <stdio.h>

int main() {
    // Usando WHILE
    int i = 1;
    printf("Números de 1 a 10 usando WHILE: ");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Usando FOR
    printf("Números de 1 a 10 usando FOR: ");
    for (int j = 1; j <= 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}
