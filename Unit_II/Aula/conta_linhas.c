#include<stdio.h>
#include<stdlib.h>

int main(void){
    int str;
    int nlinhas = 0;
    
    FILE* fp;//ponteiro para arquivo

    fp = fopen ("doc.txt", "rt");//abrindo o arquivo
    if (fp==NULL){
        printf("Erro ao abrir o arquivo\n");
            return 1;
    }
    //estrutura de repetição para contar as vezes que a quebra de linha se repete
    while((str = fgetc(fp))!= EOF){//EOF e uma constante que todo arquivo texto possui e ela não e visivel ao usario
        if(str=='\n')//identifica a quebra de linha
        nlinhas++;//contas as linhas
    }


    
//o arquivo doc.txt estava na mesma pasta 
    
    fclose(fp); //fecha o arquivo

    printf("Numero de linhas = %d\n", nlinhas+1);//imprime a quantidade linhas e incrementa um pois o compilador nao le a ultima linha uma vez que nao ha quebra

    return 0;
}