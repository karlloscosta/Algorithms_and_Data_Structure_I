#include <stdio.h>
#include <stdlib.h>
//enum para receber masculino ou feminino
typedef enum genero{  
    MASCULINO, FEMININO
}Genero;

//Declarando uma struct para armazenar os dados de uma pessoa
typedef struct pessoa{
    char nome[51];
    int idade;
    Genero genero;
}Pessoa;

int main(void){

    Pessoa* pessoa = (Pessoa*) malloc(sizeof(Pessoa));  //alocando memória
    if(pessoa == NULL){exit(1);}
    
    //recebendo os dados do usuario
    printf("Digite o nome: \n");
    scanf(" %50[^\n]", pessoa->nome);
    printf("Digite a idade: \n");
    scanf("%d", &pessoa->idade);
    printf("0 - Masculino \n1 - Feminino\nEscolha uma opcao: \n");
    scanf("%d", &pessoa->genero);
//estrutura if else que compara o valor recebido e retorna uma resposta a depender do valor
    if(pessoa->genero == MASCULINO){
        printf("Dados:\nNome: %s\nIdade: %d\nGenero: Masculino", pessoa->nome, pessoa->idade);
    }else if(pessoa->genero == FEMININO){
        printf("Dados:\nNome: %s\nIdade: %d\nGenero: Feminino", pessoa->nome, pessoa->idade);
    }else{
        printf("ERRO!");
    }

    free(pessoa);//liberando pessoa

    return 0;
}