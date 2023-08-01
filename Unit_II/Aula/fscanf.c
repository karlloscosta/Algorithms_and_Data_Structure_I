#include<stdio.h>
#include<stdlib.h>
//le de acordo com a extensao do arquivo
int main(void){
    FILE* fp;
    char str[100];
//o arquivo doc.txt estava na mesma pasta 
    fp = fopen ("doc.txt", "r");//abrindo o arquivo
    if (fp==NULL){
        printf("Erro ao abrir o arquivo\n");
            return 1;
    }
    fscanf(fp, "%s", str);
    printf("%s", str); //Le uma string formatada do aquivo fp e arma:
    fclose(fp); //imprime a string lida

    return 0;
}