#include <stdio.h>

int main(void) {
   
    int a, b, c, d;
    int *p1; //declaração do ponteiro p1
   //atribuindo endereços aos ponteiros
    int *p2 = &a;
    int *p3 = &c;
    p1 = p2; //passando o endereço de p2 para p1
    *p2 = 10; //o conteudo de a é 10
    b = 20;
    int **pp;//ponteiro de ponteiro
    pp = &p1; //passando o endereço de p1
    *p3 = **pp;//c passa ser igual a *p1
    int *p4 = &d;// mais uma declaração de ponteiro
    *p4 = b + (*p1)++;
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    
    return 0;
}

    // Os resultados serão a = 11, b = 20, c = 10 e d = 31
