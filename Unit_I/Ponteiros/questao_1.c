#include <stdio.h>

int main(void){
    
    int x, y, *ponteiro;
    y = 0;
    ponteiro = &y;
    x = *ponteiro;
    x = 4;
    (*ponteiro)++;
    --x;
    (*ponteiro) += x;

    printf("ponteiro = %p, x = %d, y = %d", ponteiro, x, y);
    
    
    //respostas

    //Ponteiro = (0060FEF4)
    //X = 3
    //y = 4

    return 0;
}