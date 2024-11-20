#include <stdio.h>

/*Escreva um programa que leia uma string e armazene-a em uma variável str1. Depois, copie a string
lida para uma outra varíavel string (str2) e imprima str2. Não use a função strcpy.
*/

void main(){

char str1[100], str2[100];
int i;

printf("Entre com uma string: ");
scanf("%s", str1);

for(i = 0; str1[i] != '\0'; i++){
    str2[i] = str1[i] ;
    
}
    str2[i] = '\0'  ;
    printf("%s", str2);
}

