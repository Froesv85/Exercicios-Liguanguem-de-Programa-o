/*6) Faça um programa que verifique se a letra digitada for: 
F ou M e imprima uma mensagem: masculino, feminino ou indefinido/outros.*/

#include <stdio.h>

int main() {
    int numTurmas, numAlunos, totalAlunos = 0;
    float mediaAlunos;

    printf("Digite a quantidade de turmas: ");
    scanf("%d", &numTurmas);

    for (int i = 1; i <= numTurmas; i++) {
        printf("Digite a quantidade de alunos da turma %d: ", i);
        scanf("%d", &numAlunos);

        while (numAlunos > 40) {
            printf("A turma não pode ter mais de 40 alunos. Digite novamente: ");
            scanf("%d", &numAlunos);
        }

        totalAlunos += numAlunos;
    }

    mediaAlunos = (float) totalAlunos / numTurmas;

    printf("A média de alunos por turma é: %.2f\n", mediaAlunos);

    return 0;
}
