#include <stdio.h>

//declaração da struct
//typedef usado para renomear a struct
typedef struct aluno {
    char nome[20];
    int idade;
    int matricula;
}Aluno;

int main(void){

   // declarando uma variavel do tipo Aluno com o nome aluno
    Aluno aluno;
    
    //recebendo os dados
    printf("Digite o nome:\n");
    scanf(" %[^\n]", aluno.nome);// armazenando os dados no endereço indicado

    printf("Digite a idade:\n");
    scanf("%d", &aluno.idade);

    printf("Digite a matricula:\n");
    scanf("%d", &aluno.matricula);
    
    //Imprimindo os dados
    printf("Os dados informados:\nNome:%s \t idade:%d \t matricula:%d  ", var_aluno.nome, var_aluno.idade, var_aluno.matricula);

    return 0;
}
