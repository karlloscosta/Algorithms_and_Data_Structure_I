/*Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
de saída “saída_q3.txt”, como ilustrado a seguir*/

#include <stdio.h>
#include <stdlib.h>


int main (void){
int c;
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
    fputc('A', arquivo);

    arquivo = fopen("arquivo.txt", "r");
    if(arquivo==NULL){
        printf("Erro");
        return 1;}
   
    while (!feof(arquivo)){
    c = fgetc(arquivo);
    printf("%c", c);
    }
fclose(arquivo);// fecha arquivo


    return 0;
}
