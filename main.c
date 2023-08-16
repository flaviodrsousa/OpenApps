#include <stdio.h>
#include <stdlib.h>
#include "adv2.h"
#include "adv1.h"
#include "menu.h"
#include "historico_adv1_guardar.h"
#include "historico_adv2_guardar.h"
#include "historico_adv1_ler.h"
#include "historico_adv2_ler.h"

int main() {

   int o = 0;
   do{
    o = menu();
    int i = 0;
    char c = 'b';
    if(o == 1){
        system("clear");
        int x = adv1();
        historico_adv1_guardar(x);
        while(c != ' '){
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\n");
            i++;
            }
            c = getchar();
            }

    } else if(o == 2){
        system("clear");
        int x = adv2();
        historico_adv2_guardar(x);
        while(c != ' '){
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\n");
            i++;
            }
            c = getchar();
            }
    
    } else if(o == 3){
        system("clear");
        historico_adv1_ler();
        printf("\n\n");
        historico_adv2_ler();
        printf("\n\n");

        int va = 0;

        while(c != ' ' && va == 0){
            if(c == 'c') {remove("historico_adv1"); remove("historico_adv2"); va = 1;}
            if(i == 0){
            printf("Voltar ao Menu (Press Enter)\nEliminar Historico(Press c)\n");
            i++;
            }
            c = getchar();
        
            }
    } 
    }while(o != 4);

   system("clear");
   exit(0);

return 0;
}


