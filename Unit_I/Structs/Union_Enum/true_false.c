#include <stdio.h>
// definindo constantes
#define TRUE 1
#define FALSE 0
//criando uma enum
typedef enum bool{
    false, true
}Bool;

int main (void){
    //declarando variavel
    Bool val;

    printf("Digite 0 ou 1\n");
    scanf("%d", &val);
    //teste e atribuição
    printf("Valor informado: %d\n", val);
    if(val==true){
        printf("Verdadeiro \n");

    }
    else if(val==false){
        printf("falso \n");
    }

    return 0;
}
