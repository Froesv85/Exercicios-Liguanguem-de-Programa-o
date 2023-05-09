/*10) Faça um programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), 
se digitar outro valor deve aparecer valor inválido. */


#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero (1-7): ");
    scanf("%d", &num);
    
    while (num < 1 || num > 7) {
        printf("Valor invalido. Digite novamente: ");
        scanf("%d", &num);
    }
    
    switch (num) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Valor invalido.\n");
    }
    
    return 0;
}
