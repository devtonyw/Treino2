#include <stdio.h>

/*Escreva um programa que leia 15 valores inteiros e positivos e encontre o maior valor. A média
aritmética dos números lidos também deverá ser calculada. Imprimir os resultados.*/

void main(){
    int i, vet[15], media, count;

    for(i = 0; i<15; i++){

        printf("Entre com um valor: ");

        scanf("%d", &vet[i]);

        count += vet[i] ; 
    }

media = count/15 ;

printf("A media dos numeros e: %d", media);
}