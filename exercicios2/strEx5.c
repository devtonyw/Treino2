#include <stdio.h>

/*Escreva um programa que leia uma string e diga se a mesma é um palíndromo ou não.
*/

void main(){

char string[100];
int i;

    printf("Entre com uma string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++){
        printf("\n%c", string[i]);
    }

}

//n sei