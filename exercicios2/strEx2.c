#include <stdio.h>

/*Escreva um programa que leia uma string do teclado e imprima cada um dos seus caracteres em uma
linha distinta.*/

void main(){

char string[100];
int i;

    printf("Entre com uma string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++){
        printf("\n%c", string[i]);
    }

}