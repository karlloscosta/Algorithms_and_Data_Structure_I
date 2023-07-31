#include <stdio.h>
#include <stdlib.h>

//Struct para registrar os dados de um Pessoa
typedef struct _pessoa{
    char nome[30];
    unsigned int doc;
    unsigned int idade;
}Pessoa;

//função que coleta e armazena os dados das pessoas
Pessoa *registra_Pessoa(void){
    
    //declaração de um vetor
    Pessoa *pessoa = (Pessoa*)malloc (3*sizeof(Pessoa));
    if(pessoa==NULL) {puts("*erro!"); exit(1);}
    
    int i;
    //laço for para percorrer o vetor
    for (i=0; i<3; i++){

    puts ("Informe o nome da pessoa");
    scanf(" %[^\n]", pessoa[i].nome);
    printf ("Informe o documento de %s\n", pessoa[i].nome);
    scanf("%d", &pessoa[i].doc);
    printf ("Informe a idade de %s\n",pessoa[i].nome);
    scanf("%d", &pessoa[i].idade);
    puts("*******************************");
    }

    return pessoa;
}
//função que imprime os dados armazenados
void imprima(Pessoa *pessoa){

int i;
for(i=0; i<3; i++){

    printf("Nome: %s\n", pessoa[i].nome);
    printf("Numero do documento: %d\n", pessoa[i].doc);
    printf("Idade: %d\n", pessoa[i].idade);
    puts("*******************************");
        }
}
//função que realiza uma mudança na idade de uma pessoa
void *muda_idade(Pessoa *pessoa){

    int i;
    int n;

    puts("Deseja atualizar a idade de alguem?");
    printf(" 1 - SIM\t 2- NAO\n\n");
    scanf("%d", &n);
    // if else para saber se a pessoa deseja atualizar a idade de alguem
    if(n==1){
        printf("de qual pessoa deseja atualizar a idade?\n");
        scanf("%d", &i);
        printf("informe a idade atualizada...\n", n);
        scanf("%f", &pessoa[i-1].idade);
        }
        else{
            return 0;
        }
    }
    //funçao para verificar qual é a pessoa mais velha e mais nova
    void maior_menor( Pessoa *pessoa){
        int i;
        int maior = 0;
        int menor = 0;
    // laço começa em 1 pois maior e menor ja possuem o valor 0
        for(i=1; i<3;i++ ){
            //teste e armazenamento da maior idade
            if(pessoa[i].doc>pessoa[maior].doc){
                maior = i;
            }
            //teste e armazenamento da menor idade
           else if(pessoa[i].doc<pessoa[menor].doc){
                menor = i;
                }
        }
        //imprime na tela o nome e a idade da pessoa mais velha e mais nova
        printf("a pessoa mais velha e %s, com %d anos \n\n", pessoa[maior].nome, pessoa[maior].idade);
        printf("a pessoa mais nova e %s, com %d anos \n\n", pessoa[menor].nome, pessoa[menor].idade);
    }
//chamda da função main
int main (void){
// chamada das funções
Pessoa *pessoa = registra_Pessoa();
muda_idade(pessoa);
imprima(pessoa);
maior_menor(pessoa);
    return 0;
}
