#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef enum bool{
    false, true
}Bool;

int main (void){

    Bool val;

    printf("Digite 0 ou 1\n");
    scanf("%d", &val);

    printf("Valor informado: %d\n", val);
    if(val==true){
        printf("Verdadeiro \n");

    }
    else if(val==false){
        printf("falso \n");
    }

    return 0;
}