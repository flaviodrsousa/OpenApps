#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int historico_adv1_ler(){
    FILE *arquivo;
    char linha[50];
    arquivo = fopen("historico_adv1","r");

    if(arquivo == NULL){
        printf("Ainda não existe histórico registado para ADV1");
        return 1;
    }
    else {
        while(fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s",linha);
        }
    }

return 0;
}