#include <stdio.h>

/*Ler 3 notas de prova e calcular a media ponderada sabendo que a primeira prova tem peso 2, a segunda tem
peso 3 e a terceira tem peso 4. Declarar as notas e as médias como variáveis globais. Fazer uma função para
ler as notas, uma função para calcular a média (f_media) e outra função para imprimir.*/

float nota1, nota2, nota3, media;

int lerNotas(){
    printf("Entre com a nota da primeira prova:");
    scanf("%f", &nota1);
    printf("Entre com a nota da segunda prova:");
    scanf("%f", &nota2);
    printf("Entre com a nota da terceira prova:");
    scanf("%f", &nota3);
}

void f_media(){
    media = ((nota1*2) + (nota2*3) + (nota3*4))/3 ;
}

void imprimir(){
    printf("A sua média foi %f", media);
}

void main(){

    lerNotas();
    f_media();
    imprimir();

}  

//correto