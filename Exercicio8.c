/*11) Faça um programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.*/

#include <stdio.h>

int main() {
    char turno;
    
    printf("Digite o turno em que voce estuda (M-matutino, V-vespertino, N-noturno): ");
    scanf("%c", &turno);
    
    while (turno != 'M' && turno != 'm' && turno != 'V' && turno != 'v' && turno != 'N' && turno != 'n') {
        printf("Valor invalido. Digite novamente: ");
        scanf(" %c", &turno);
    }
    
    switch (turno) {
        case 'M':
        case 'm':
            printf("Bom dia!\n");
            break;
        case 'V':
        case 'v':
            printf("Boa tarde!\n");
            break;
        case 'N':
        case 'n':
            printf("Boa noite!\n");
            break;
        default:
            printf("Valor invalido.\n");
    }
    
    return 0;
}
