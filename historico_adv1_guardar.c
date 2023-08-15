#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int historico_adv1_guardar(int ten){
    
    FILE *arquivo;
    char nome[] = "historico_adv1";
    char linha[100];
    
    arquivo = fopen(nome, "r");

    if(arquivo != NULL){

        FILE *temp;
        char nome_temp[] = "historico_adv1_temp";
        int i = 0;
        temp = fopen(nome_temp, "w");

        if(temp == NULL) {
            fclose(arquivo);
            return 2;
        }

        while(fgets(linha, sizeof(linha), arquivo) != NULL){
            
            if(i == 0) {
                fprintf(temp, "%s", linha);
            }
            
            else {
            
                int valor = atoi(linha);
                if(ten > valor) {
                    fprintf(temp, "%d\n", ten);
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
        fprintf(arquivo, "---Histórico adv1---\n%d",ten);
    }

return 0;
}
