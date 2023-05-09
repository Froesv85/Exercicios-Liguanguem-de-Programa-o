/* 18) Faça um programa que leia uma letra maiúscula ou minúscula e informe se ela é uma vogal ou uma consoante. Se o usuário digitar um número ou outro caractere não reconhecido,
o programa deve informar que a entrada é inválida, utilizando a estrutura switch-case.*/

#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra maiuscula ou minuscula: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("A letra digitada eh uma vogal.\n");
            break;
        default:
            if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
                printf("A letra digitada eh uma consoante.\n");
            } else {
                printf("Entrada invalida.\n");
            }
            break;
    }

    return 0;
}
