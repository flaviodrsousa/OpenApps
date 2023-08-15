#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
