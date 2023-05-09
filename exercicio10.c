/*15) Faça um programa que leia um número inteiro entre 1 e 12 e mostre o quadrado ou o cubo do número, dependendo se ele é par ou ímpar, utilizando a estrutura switch-case.*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro entre 1 e 12: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("O número é ímpar e seu quadrado é: %d\n", num*num);
            break;
        case 2:
            printf("O número é par e seu cubo é: %d\n", num*num*num);
            break;
        case 3:
            printf("O número é ímpar e seu quadrado é: %d\n", num*num);
            break;
        case 4:
            printf("O número é par e seu cubo é: %d\n", num*num*num);
            break;
        case 5:
            printf("O número é ímpar e seu quadrado é: %d\n", num*num);
            break;
        case 6:
            printf("O número é par e seu cubo é: %d\n", num*num*num);
            break;
        case 7:
            printf("O número é ímpar e seu quadrado é: %d\n", num*num);
            break;
        case 8:
            printf("O número é par e seu cubo é: %d\n", num*num*num);
            break;
        case 9:
            printf("O número é ímpar e seu quadrado é: %d\n", num*num);
            break;
        case 10:
            printf("O número é par e seu cubo é: %d\n", num*num*num);
            break;
        case 11:
            printf("O número é ímpar e seu quadrado é: %d\n", num*num);
            break;
        case 12:
            printf("O número é par e seu cubo é: %d\n", num*num*num);
            break;
        default:
            printf("Número inválido. Tente novamente!\n");
            break;
    }

    return 0;
}
