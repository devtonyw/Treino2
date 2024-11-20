#include <stdio.h>
#include <string.h>

/*Escreva um programa que leia uma string do teclado e imprima o seu número de caracteres,
desconsiderando o caracter nulo ao final. Não use a função strlen.*/

void main(){

char string[100];
int i, count = 0;

    printf("Entre com uma string: ");
    scanf("%s", string);

    //count = strlen(string) ; 

    for(i = 0; string[i] != '\0'; i++){
        count += 1 ;
    }

    printf("O numero de caracteres da string e %d", count);
}


