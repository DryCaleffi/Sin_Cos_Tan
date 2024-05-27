#include <stdio.h>
#include <math.h>
// Adryelle Caroline de Souza Calefi 

// Atividade computacional
#define CONVER(x) ((x) * M_PI / 180.0)

float conver(float x) 
{
    return CONVER(x);
}

float seno(float x) {
    return sin(x);
}

float cosseno(float x) {
    return cos(x);
}

float tangente(float x) {
    return tan(x);
}

int main() {
    float x = 90, rad, sen;
    int op;

    do {
        printf("\nInforme a operação desejada:\n");
        printf("1- Calcular o Seno do ângulo\n");
        printf("2- Calcular o Cosseno do ângulo\n");
        printf("3- Calcular a Tangente do ângulo\n");
        printf("4- Sair\n");
        scanf("%d", &op);


        while (getchar() != '\n');

        switch (op) {
            case 1:
                rad = conver(x);
                sen = seno(rad);
                printf("O SENO do ângulo de %.2f é %.2f\n", x, sen);
                break;
            case 2:
                rad = conver(x);
                printf("O COSSENO do ângulo de %.2f é %.2f\n", x, cosseno(rad));
                break;
            case 3:
                if (fmod(x, 90) == 0) {
                    printf("Informe um número válido. Lembre-se de que a Tangente não existe para 90 graus e seus múltiplos.\n");
                } else {
                    rad = conver(x);
                    printf("A TANGENTE do ângulo de %.2f é %.2f\n", x, tangente(rad));
                }
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Informe uma opção válida.\n");
        }
    } while (op != 4);

    return 0;
}