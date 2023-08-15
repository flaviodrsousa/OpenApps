#include <stdio.h>
#include <stdlib.h>
#include "adv2.h"
#include "adv1.h"
#include "menu.h"

int main() {

   int o = 0;
   do{
    o = menu();
    int i = 0;
    char c = 'b';
    if(o == 1){
        system("clear");
        adv1();
        while(c != ' '){
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\n");
            i++;
            }
            c = getchar();
            }

    } else if(o == 2){
        system("clear");
        adv2();
        while(c != ' '){
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\n");
            i++;
            }
            c = getchar();
            }
    
    //Mostrar Histórico
    } else if(o == 3){
        system("clear");
    } 
    }while(o != 4);

   system("clear");
   exit(0);

return 0;
}


