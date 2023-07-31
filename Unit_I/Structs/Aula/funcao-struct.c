#include <stdio.h>
#include <stdlib.h>
//struct para disciplina
typedef struct disciplina{
    char nome[30];
    float nota;
}Disciplina;
//struct para aluno
typedef struct aluno{
    char nome[20];
    int matricula;
    Disciplina * disciplina;// ponteiro para a discuplina
}Aluno;
    
//Prototipo da funcao cadastra_aluno
Aluno * cadastro_aluno(void);

int main(void){

    Aluno * aluno = cadastro_aluno();   //Chamando a funcao cadastra_aluno e armazenando em um ponteiro

    //Imprimindos dados 
  //usa -> pois é um ponteiro
    printf("Dados:\n
      Nome: %s\n
      Matricula: %d\n
      Disciplina: %s\n
      Nota: %.2f", 
      aluno->nome, aluno->matricula, aluno->disciplina[0].nome, aluno->disciplina[0].nota);
    printf("\nDisciplina: %s\nNota: %.2f", aluno->disciplina[1].nome, aluno->disciplina[1].nota);

    //desalocando a memória
    free(aluno->disciplina);
    free(aluno);

    return 0;
}

//Funcao para cadastrar o aluno
Aluno * cadastro_aluno(void){

    Aluno * aluno = (ALUNO *) malloc(sizeof(ALUNO));    //Alocando memoria para o vetor aluno
        if(aluno == NULL){
            printf("Falha na alocacao de memoria!");
            exit(1);
        }
        aluno->disciplina = (Disciplina *) malloc(2*sizeof(Disciplina));    //Alocando memoria para as disciplinas 
        if(aluno->disciplina == NULL){
            printf("Falha na alocacao de memoria!"); exit(1);}

        //recebendo os dados
        printf("Digite o nome:\n");
        scanf(" %[^\n]", (*aluno).nome);
        printf("Digite a matricula:\n");
        scanf("%d", &(*aluno).matricula);
        printf("Digite o nome da dicplina 1:\n");
        scanf(" %[^\n]", aluno->disciplina[0].nome);
        printf("Digite a nota da disciplina 1:\n");
        scanf("%f", &aluno->disciplina[0].nota); 
        printf("Digite o nome da dicplina 2:\n");
        scanf(" %[^\n]", aluno->disciplina[1].nome);
        printf("Digite a nota da disciplina 2:\n");
        scanf("%f", &aluno->disciplina[1].nota);    
        printf("\n");

    return aluno;
}
