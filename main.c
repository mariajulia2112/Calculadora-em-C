#include <stdio.h>
#include <stdlib.h>

int main() {
    double X, Y, resultado;
    int opção;
    char continuar

    do{
        printf("\n===============================\n");
        printf("   Calculadora Simples\n");
        printf("\n===============================\n");
        printf("Selecione uma operação: \n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opção);

        if (opção == 5) {
            printf("\nObrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        if (opção > 5 || opção < 1) {
            printf("Opção inválida. Por favor, tente novamente.\n");
            continue;
        }

        printf("\n Digite o primeiro número: ");
        scanf("%f", &X);

        printf("\n Digite o segundo número: ");
        scanf("%f", &Y);

        switch(opção) {
            case 1:
                resultado = X + Y;
                printf("Resultado: %.2f + %.2f = %.2f\n", X, Y, resultado);
                break;
            case 2:
                resultado = X - Y;
                 printf("Resultado: %.2f - %.2f = %.2f\n", X, Y, resultado);
                break;
            case 3:
                resultado = X * Y;
                 printf("Resultado: %.2f * %.2f = %.2f\n", X, Y, resultado);
                break;
            case 4:
                if (Y == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    resultado = X / Y;
                    printf("Resultado: %.2f / %.2f = %.2f\n", X, Y, resultado);
                }
                break;
        }
        do {
            printf("\n Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar == 'S') {
                continuar = 's';
            } else if (continuar == 'N') {
                continuar = 'n';
            }

            if (continuar != 'n' && continuar != 'n') {
                printf("Resposta inválida! Digite s ou n.\n");
            }
        } while (continuar != 's' && continuar !='n');

    } while (continuar == 's');

    if (continuar == 'n') {
        printf("\nObrigado por usar a calculadora! Até a próxima.\n");
    }
    
    return 0;
}
