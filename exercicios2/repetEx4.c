#include <stdio.h> 
#include <math.h>

/*Escrever um programa que lê um conjunto de valores, imprimindo, para cada valor: seu quadrado, seu
cubo e sua raiz quadrada. O conjunto é finalizado com o valor zero.*/

void main(){

int numero, quadrado, cubo;
float raiz;

    printf("Entre com um numero: ");
    scanf("%d", &numero);
    
    while(numero != 0){

        quadrado = numero*numero ;
        cubo = numero*numero*numero ;
        raiz = sqrt(numero); 
        printf("\nO quadrado do numero e %d", quadrado);
        printf("\nO cubo do numero e %d", cubo);
        printf("\nA raiz do numero e %f", raiz);

        printf("\nEntre com um numero: ");
        scanf("%d", &numero);

}



}