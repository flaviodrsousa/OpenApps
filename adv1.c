#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int adv1(){
     // Inicializar o gerador de números aleatórios
    srand(time(NULL));
    
    // Gerar um número aleatório entre 1 e 100
    int numeroSecreto;
    int palpite;
    int tentativas = 0;
    int i;
    
    printf("Bem-vindo ao Adivinhe o Número!\n");
    printf("Escolha um número:");
    scanf("%d", &numeroSecreto);

    system("clear");

    while(i != 0){
         printf("Digite um palpite: ");
        scanf("%d", &palpite);
        tentativas++;
        i = palpite-numeroSecreto;
        
        if (i > 10) {
            printf("Muito Alto! Tente novamente.\n");
        } else if (i < -10) {
            printf("Muito Baixo! Tente novamente.\n");
        } else if (0 < i  && i <= 10) {
            printf("Alto! Tente novamente.\n");
        } else if (-10 <= i && i < 0) {
            printf("Baixo! Tento novamente.\n");
        } else {
            system("clear");
            printf("Parabéns! Você acertou em %d tentativas.\n", tentativas);
        }

    }
return 0;
}