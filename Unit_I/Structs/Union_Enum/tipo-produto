/*Escreva um programa que implementa uma struct Produto com os campos nome, pre¸co e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto*/
#include <stdio.h>
#include <string.h>

// declaração da union
typedef union tipo{
    char produto[20];

}type;
//declaração da struct
typedef struct _produto{
    char nome[20];
    float valor;
    type tipo;
}Produto;

int main(void){

    Produto* produto = (Produto*) malloc(sizeof(Produto));     //Alocando memoria para o vetor produto
    if(produto == NULL){exit(1);}
    //condição de teste para o switch case
    int registra;
    //coletando os dados do produto
    puts("***DADOS DO PRODUTO***");

    printf("informe o nome do produto...\n");
    scanf(" %[^\n]", produto->nome);

    printf("informe o valor do produto...\n");
    scanf("%f", &produto->valor);

    puts("Informe o tipo do seu produto");
    // recendo a informação do tipo
    printf ("Digite\t0 para registrar um Alimento\nDigite\t1 para registrar uma Bebida\nDigite\t2 para registrar um Eletronico\n");
    scanf ("%d", &registra);

    switch (registra)
    {
        //registrando na Union 
        case 0:
            strcpy(produto->tipo.produto,"Alimento"); break;
        
        case 1:
            strcpy(produto->tipo.produto,"Bebida"); break;

        case 2:
            strcpy(produto->tipo.produto,"Eletronico"); break;//strcpy (destino, "Palavra Atribuida")
    }
    //imprimindo as informações na tela
    printf("o Produto %s custa %.2f e é um %s\n\n", produto->nome, produto->valor, produto->tipo.produto);

    return 0;
}
