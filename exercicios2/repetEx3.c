#include <stdio.h>

/*Escreva um programa que leia um número inteiro e mostre a sua tabuada de multiplicação, conforme
o formato abaixo. Por exemplo, se n = 2, deverá ser impresso:
2 x 0 = 0
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
....
2 x 10 = 20*/

void main(){

    int numero, calculo, i;

    printf("Entre com o numero da tabuada: ");
    scanf("%d", &numero);

    for(i=0; i<=10; i++){
        calculo = numero*i ;
        printf("\n%dx%d = %d", numero, i, calculo);
    }
}