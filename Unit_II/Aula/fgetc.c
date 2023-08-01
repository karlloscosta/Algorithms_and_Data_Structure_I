#include<stdio.h>
#include<stdlib.h>


int main(void){
    FILE* fp;
    int str;// todo caracter e um inteiro 0 ou 1
//o arquivo doc.txt estava na mesma pasta 
    fp = fopen ("doc.txt", "r");//abrindo o arquivo
    if (fp==NULL){
        printf("Erro ao abrir o arquivo\n");
            return 1;
    }
    str = fgetc(fp);
    printf("%c\n", str); //Leo primeiro caracter
    fclose(fp); //imprime o caracter lido

    return 0;
}