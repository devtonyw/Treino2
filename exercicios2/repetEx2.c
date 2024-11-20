#include <stdio.h>

/*Escrever um programa que leia a quantidade de alunos de uma sala, em seguida leia a nota final de
cada aluno e calcule e mostre a média da turma.*/

main(){

int alunos, nota, media = 0, calculo = 0, i;

    printf("Entre com o numero de alunos da turma: ");
    scanf("%d", &alunos);

    for (i = 0; i < alunos; i++){
        printf("Entre com a nota final do aluno: ");
        scanf("%d", &nota);

        calculo += nota ;
    }
    media = calculo/i ; 
    printf("A media da turma foi de %d", media);
}