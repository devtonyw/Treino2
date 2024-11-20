#include <stdio.h>

/*Fazer um programa para:
◼ Ler o nome e a idade de duas pessoas
◼ Imprimir a media de idade
◼ Imprimir os nomes e as idades (uma pessoa por linha)*/

void main(){
    int idade1, idade2, media;
    char nome1[50], nome2[50];

    printf("Entre com o nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Entre com a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Entre com o nome da primeira pessoa: ");
    scanf("%s", &nome2);
    printf("Entre com a idade da primeira pessoa: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2 ; 

    printf("\nO nome da primeira pessoa e: %s", nome1);

    printf("\nO nome da segunda pessoa e: %s", nome2);
    
    printf("\nA idade da primeira pessoa e: %d", idade1);
  
    printf("\nA idade da segunda pessoa e: %d", idade2);
    
    printf("A media de idades e %d", media);

}