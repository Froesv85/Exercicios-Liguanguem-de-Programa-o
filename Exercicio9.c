/*12) Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.

O menu será como segue:

[ 1 ] – Adição

[ 2 ] – Subtração

[ 3 ] – Multiplicação

[ 4 ] – Divisão
 
[ 5 ] – Fim */

#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcao = 0;
    
    while (opcao != 5) {
        printf("CALCULADORA SIMPLES\n\n");
        printf("[ 1 ] - Adicao\n");
        printf("[ 2 ] - Subtracao\n");
        printf("[ 3 ] - Multiplicacao\n");
        printf("[ 4 ] - Divisao\n");
        printf("[ 5 ] - Fim\n\n");
        printf("Escolha a operacao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("%.2f + %.2f = %.2f\n\n", num1, num2, resultado);
                break;
            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("%.2f - %.2f = %.2f\n\n", num1, num2, resultado);
                break;
            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("%.2f * %.2f = %.2f\n\n", num1, num2, resultado);
                break;
            case 4:
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Erro: divisao por zero!\n\n");
                } else {
                    resultado = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n\n", num1, num2, resultado);
                }
                break;
            case 5:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Erro: operador invalido!\n\n");
        }
    }
    
    return 0;
}
