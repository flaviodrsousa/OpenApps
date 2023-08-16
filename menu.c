#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu(){
    
    system("clear");
    printf("------ MENU ------\n\n1. Escolhe o Número\n2. Número Aleatório\n3. Histórico\n4. Sair\n\n");
    int o;
    scanf("%d", &o);

return o;
}
