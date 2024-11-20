#include <stdio.h> 

/*As notas de uma turma de N alunos são lidas e armazenadas em um vetor. Fazer um programa
contendo funções para:
• ler as N notas, armazenando-as em um vetor (este deve ser variável global);
• calcular e retornar a média da turma;
• receber o valor da media calculada como parâmetro e retornar a porcentagem de pessoas acima
da média.
*/

void main(){

    int n1, n2, calculo;

    printf("Entre com n1: ");
    scanf("%d", &n1);

    printf("Entre com n2: ");
    scanf("%d", &n2);

    calculo = n1+n2 ;

    if (calculo%3 == 0){
        printf("O numero é multiplo de 3.");
    }
    else{
        printf("O numero n e multiplo de 3");
    }


}




