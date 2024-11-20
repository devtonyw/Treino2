#include <stdio.h>

/*Escreva um programa que leia uma string e imprima a mesma invertida, ou seja, de trás para frente.
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
    printf("%s", str2[-1]);
}

//n sei