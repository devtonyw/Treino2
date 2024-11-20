#include <stdio.h>

void main(){

    float x, y;
    int z;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &x);
    printf("Entre com o segundo numero: ");
    scanf("%f", &y);

    z = x/y ; 

    printf("A divisao inteira e : %d", z);
}