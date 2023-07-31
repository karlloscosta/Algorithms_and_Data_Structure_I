#include <stdio.h>
#include <math.h>
//função que calcula
void hexagono(float l, float *area, float *perimetro){
   //uso de ponteiros para modificar as variaveis fora da função
    *area = (3*pow(l, 2)*sqrt(3))/2;
    *perimetro = 6*l;

}

int main(void){
    
    float l, area, perimetro;

    printf("Digite o valor do lado (l) do hexagono:\n");
    scanf("%f", &l);

    calcula_hexagono(l, &area, &perimetro);//chamada da função
    printf("A area do hexagono e: %f, e o perimetro e: %f", area, perimetro);// passagem com os valores alterados

    return 0;
}
