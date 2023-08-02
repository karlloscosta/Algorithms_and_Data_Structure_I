#include <stdio.h>
#include <stdlib.h>


int main (void){
float num = 3.4;
    char nome_arquivo[20]; //recebe o nome do arquivo
    printf("Informe o nome do arquivo... \n");
    scanf(" %[^\n]", nome_arquivo);//lê o nome do arquivo
    

    FILE* arquivo = fopen(nome_arquivo, "w");//abre o arquivo
    if(arquivo==NULL){
        printf("Erro");
        return 1;
    }
    else{
        printf("Arquivo criado com sucesso");
    }
    fprintf(arquivo, "\n is float %f\n", num);// escreve no arquivo

    fclose(arquivo);// fecha arquivo


    return 0;
}
