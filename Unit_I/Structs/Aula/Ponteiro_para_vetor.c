//função que preenche o vetor Aluno com dados
void preenche (int n, Aluno** tab, int i){
if( i<0 ||i>=n ){
    printf ("indice fora do limite do vetor.\n");
    exit(1);
}

if (tab[i]==NULL)
    tab[i]=(Aluno*) malloc(sizeof(Aluno));

    printf("entre com a matricula: ");
    scanf("%d", &tab[i]->mat);
    printf("Entre com o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com o endereço: ");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Entre com o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
}
//Função que limpa as posições do vetores
void retira (int n, Aluno** tab, int i){
    if (i<0 || i>=n){
        printf("Indice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i] != NULL){
        free(tab[i]);
        tab[i]=NULL;
    }
}
//Função que imprime os dados na tela
void imprime (int n, Aluno** tab, int i){
    if (i<0 || i>=n){
        printf("Indice fora do limite do vetor.\n");
        exit(1);
    }
     if (tab[i] != NULL){
        printf("Matricula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
}
//Função que chama função que chama função imprime para imprimir todos os dados
void imprime_tudo (int n, Aluno** tab){
    int i;
    for(i=0; i<n; i++)
    imprime (n, tab, i);
    }


int main (void){
    Aluno* tab[10]; //ponteiro de um vetor
    inicializa(10, tab);//chama a função inicializa
    preenche(10, tab, 0);//chama a função preenche na posição 0
    preenche(10, tab, 1);//chama a função preenche na posição 1
    preenche(10, tab, 2);//chama a função preenche na posição 2
    imprime_tudo(10, tab);//chama a função imprime_tudo
    retira(10, tab,0);//chama a função retira na posição 0
    retira(10, tab,1);//chama a função retira na posição 1
    retira(10, tab,2);//chama a função retira na posição 2
    return 0;
}
