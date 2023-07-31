#include <stdio.h>
#include <stdlib.h>
//definindo a struct
typedef struct banco{
    char nome[30];
    unsigned int conta;
    unsigned int agencia;
    unsigned int senha;
}Dados;
//função que cadastra os dados dos funcionarios
Dados *dados (int qtd_clientes){
    //Alocando o vetor que armazena os dados
     Dados *cliente = (Dados*) malloc(qtd_clientes*sizeof(Dados));
     if(cliente==NULL){
        printf("erro de alocacao de memoria!"); {exit(1);}
    }
    //estrutura de repetição para percorrer o vetor
    int indice;
    for(indice=0; indice<qtd_clientes; indice++){
    
    printf("informe o nome do cliente:\n");
    scanf(" %[^\n]", cliente[indice].nome);
    printf("digite a idade\n");
    scanf("%d", &cliente[indice].conta);
    printf("digite o salario\n");
    scanf("%d", &cliente[indice].agencia);
    printf("digite a senha\n");
    scanf("%d", &cliente[indice].senha);
    puts("********************************");
    }

    return cliente;
}
//função que imprime na tela os dados armazenados
void imprime(int qtd_clientes, Dados *cliente){
int indice;
    for(indice=0; indice<qtd_clientes; indice++){
    printf("INFORMAÇÕES DO CLIENTE %d ***\n", indice+1);
    printf("nome: %s\n", cliente[indice].nome);
    printf("conta: %d\n",cliente[indice].conta);
    printf("agencia: %d\n",cliente[indice].agencia);
    printf("senha: %d\n",cliente[indice].senha);
    puts("********************************");
    }
}

int main(void){
 /*Tipo *vetor= função();*/
 //chamada das funções
 Dados *cliente = dados(2);
 imprime(2, cliente);

 return 0;
}