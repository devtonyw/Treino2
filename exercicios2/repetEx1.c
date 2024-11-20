#include <stdio.h>

/*Escrever um programa que leia uma sequência de números, calcule e imprima a média aritmética. A
sequência termina quando for digitado o valor zero.*/

void main(){
    int numero, soma = 0, media, i = 0;

    printf("Entre com um numero; ");
    scanf("%d", &numero);

    while (numero != 0){
        soma += numero ;
        i ++ ;
        printf("Entre com um numero; ");
        scanf("%d", &numero);
    }
    media = soma/i ;
    printf("A soma foi %d", soma);
    printf("\nA media foi %d", media);
}