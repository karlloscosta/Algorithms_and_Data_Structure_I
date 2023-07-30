#include <stdio.h>
#include <stdlib.h>

//Struct para registrar os dados de um funcionario
typedef struct _funcionario{
    char nome[30];
    float salario;
    int id;
    char cargo[30];
}Funcionario;

//função que coleta e armazena os dados dos funcionários
Funcionario *registra_funcionario(void){
    
    //declaração de um vetor
    Funcionario *funcionario = (Funcionario*)malloc (3*sizeof(Funcionario));
    
    int i;
    //laço for para percorrer o vetor
    for (i=0; i<3; i++){

    puts ("Informe o nome do funcionario");
    scanf(" %[^\n]", funcionario[i].nome);
    puts ("Informe o Salario do funcionario");
    scanf("%f", &funcionario[i].salario);
    puts ("Informe o Id do funcionario");
    scanf("%d", &funcionario[i].id);
    puts ("Informe o cargo do funcionario");
    scanf(" %[^\n]", funcionario[i].cargo);
    puts("*******************************");
    }

    return funcionario;
}
//função que imprime os dados armazenados
void imprima(Funcionario *funcionario){

int i;
for(i=0; i<3; i++){

    printf("O nome do funcionario e %s\n", funcionario[i].nome);
    printf("O nome do funcionario e %.2f\n", funcionario[i].salario);
    printf("O nome do funcionario e %d\n", funcionario[i].id);
    printf("O nome do funcionario e %s\n", funcionario[i].cargo);
    puts("*******************************");
        }
}
//função que realiza uma mudança no salario de um funcionario
void *muda_salario(Funcionario *funcionario){

    int i;
    int n;

    puts("Deseja modificar o salário de algum funcionario?");
    printf(" 1 - SIM\t 2- NAO\n\n");
    scanf("%d", &n);
    // if else para saber se a pessoa deseja modificar um salario
    if(n==1){
        printf("de qual funcionario deseja modificar o salario?\n");
        scanf("%d", &i);
        printf("informe o novo salario do funcionario...\n", n);
        scanf("%f", &funcionario[i-1].salario);
        }
        else{
            return 0;
        }
    }
    //funçao para verificar qual o funcionario possui o maior e o menor salário
    void maior_menor( Funcionario *funcionario){
        int i;
        int maior = 0;
        int menor = 0;
    // laço começa em 1 pois maior e menor ja possuem o valor 0
        for(i=1; i<3;i++ ){
            //teste e armazenamento do maior salário
            if(funcionario[i].salario>funcionario[maior].salario){
                maior = i;
            }
            //teste e armazenamento do menor salário
           else if(funcionario[i].salario<funcionario[menor].salario){
                menor = i;
                }
        }
        //imprime na tela o nome e o salário dos funcionarios que possuem o maior e o menor
        printf("o funcionario que possui o maior salario é o %s, com RS %.2f\n\n", funcionario[maior].nome, funcionario[maior].salario);
        printf("o funcionario que possui o menor salario é o %s, com RS %.2f\n\n", funcionario[menor].nome, funcionario[menor].salario);
    }

//chamda da função main
int main (void){
// chamada das funções
Funcionario *funcionario = registra_funcionario();
muda_salario(funcionario);
imprima(funcionario);
maior_menor(funcionario);

    return 0;
}
