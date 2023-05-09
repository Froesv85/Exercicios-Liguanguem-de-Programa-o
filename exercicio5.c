/* 8) Faça um programa que leia 3 valores inteiros e 
exiba-os em ordem crescente.*/

#include <stdio.h>

int main() {
    int a, b, c, temp;
    int ordenado = 0; /* inicialmente, os valores não estão ordenados*/

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Enquanto os valores não estiverem ordenados*/
    while (!ordenado) {
        ordenado = 1; /*  os valores estão ordenados*/

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
            ordenado = 0; /* se houve troca de valores, 
            os valores não estão ordenados*/
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
            ordenado = 0; /* se houve troca de valores, os 
            valores não estão ordenados*/
        }
    }

    printf("Valores em ordem crescente: %d %d %d", a, b, c);

    return 0;
}
