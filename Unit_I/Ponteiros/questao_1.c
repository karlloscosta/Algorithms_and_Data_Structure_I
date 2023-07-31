#include <stdio.h>

int main(void){
    
    int x, y, *ponteiro;
    y = 0;
    ponteiro = &y; //atribuindo o endereço de y ao ponteiro
    x = *ponteiro; //atribuindo o valor que o ponteiro guarda a x
    x = 4; 
    (*ponteiro)++;//somando + 1 ao conteudo do ponteiro
    --x;
    (*ponteiro) += x;// somando x com o ponteiro,

    printf("ponteiro = %p, x = %d, y = %d", ponteiro, x, y);
    
    
    //respostas

    //Ponteiro = (0060FEF4)
    //X = 3
    //y = 4

    return 0;
}
