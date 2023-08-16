#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int historico_adv2_guardar(int ten){
    
    FILE *arquivo;
    char nome[] = "historico_adv2";
    char linha[100];
    
    arquivo = fopen(nome, "r");

    if(arquivo != NULL){

        FILE *temp;
        char nome_temp[] = "historico_adv2_temp";
        int i = 0;
        int v = 0;
        temp = fopen(nome_temp, "w");

        if(temp == NULL) {
            fclose(arquivo);
            return 2;
        }

        while(fgets(linha, sizeof(linha), arquivo) != NULL && i < 3){
            
            if(i == 0) {
                fprintf(temp, "%s", linha);
            }
            
            else {
            
                int valor = atoi(linha);
                

                if(ten > valor && v == 0) {
                    fprintf(temp, "%d\n%d\n", ten,valor);
                    v++;

                } else {
                    fprintf(temp, "%s", linha);
                }

            }

            i++;
        }

        fclose(arquivo);
        fclose(temp);

        remove(nome);
        rename(nome_temp, nome);



   } else {
        arquivo = fopen(nome, "w");
        fprintf(arquivo, "---Histórico adv2---\n%d\n0\n0",ten);
        fclose(arquivo);
    }

return 0;
}