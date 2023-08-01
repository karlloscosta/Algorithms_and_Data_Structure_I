//FILE* fopen (char*nome_arquivo, char* modo)

//r - read - leitura
//w - write - abrir para escrever
//a - append - adicionar mais texto a um arquivo
//t - text- abrir aquivo no modo texto
//b - arquivo binario

#include <stdio.h>
#include <stdlib.h>


int main(void){
FILE* fp; //ponteiro para arquivo
fp = fopen ("entrada.txt", "wt"); 
if(fp==NULL){//testando se o arquivo foi criado ou não
    printf("Erro na abertura do arquivo!\n");
    exit(1);
    }
    else{ printf("Arquivo criado!");}
    //fechando o arquivo
    if(!fclose(fp)){
        printf("Arquivo fechado com sucesso");
    }


return 0;

}