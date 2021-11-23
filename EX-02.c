#include <stdio.h>
int main(){

    int var1, var2,soma; 
    printf("Insira o PRIMEIRO valor para a soma:");
    scanf("%d", &var1); 
    printf("Insira o SEGUNDO valor para a soma:");
    scanf("%d",  &var2); 
    soma = var1 + var2;

    if(soma > 10)
    {
        printf("Soma = %d", soma);
    }else
    {
        printf("Insira dois valores que sua soma seja maior que 10");
    }

    return 0;
}