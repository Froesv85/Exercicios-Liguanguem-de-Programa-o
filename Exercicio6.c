/*9) Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:

a) A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;

b) A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;

c) A mensagem "Aprovado com Distinção", se a média for igual a 10.*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int contador = 1;

    while (contador <= 3) {
        printf("Digite a nota %d do aluno: ", contador);
        scanf("%f", &nota1);
        
        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida! Digite novamente.\n");
            continue;
        }

        if (contador == 1) {
            nota1 = nota1 * 2;
        } else if (contador == 2) {
            nota2 = nota1 * 3;
        } else {
            nota3 = nota1 * 5;
        }

        contador++;
    }

    media = (nota1 + nota2 + nota3) / 10;

    printf("Média: %.2f\n", media);

    if (media >= 7 && media < 10) {
        printf("Aprovado com média %.2f\n", media);
    } else if (media < 7) {
        printf("Reprovado com média %.2f\n", media);
    } else if (media == 10) {
        printf("Aprovado com Distinção!\n");
    }

    return 0;
}
