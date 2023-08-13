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


int adv2(){
     // Inicializar o gerador de números aleatórios
    srand(time(NULL));
    
    // Gerar um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;
    int i;
    
    printf("Bem-vindo ao Adivinhe o Número!\n");

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

int menu(){
    system("clear");
    printf("------ MENU ------\n\n1. Escolhe o Número\n2. Número Aleatório\n3. Sair\n\n");
    int o;
   // do{
    scanf("%d", &o);
   // if(o > 3) printf("Número Inválido, repita:");
   // } while(o != 1 || o != 2 || o != 3);

return o;
}


int main() {
   int o = 0;
   do{
    o = menu();
    int i = 0;
    char c = 'b';
    if(o == 1){
        system("clear");
        adv1();
        while(c != 'a'){
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\n");
            i++;
            }
            c = getchar();
            }

    } else if(o == 2){
        system("clear");
        adv2();
        while(c != 'a'){
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\n");
            i++;
            }
            c = getchar();
            }
    } 
    }while(o != 3);

   system("clear");
   exit(0);

return 0;
}


