#include <stdio.h>

/*Fazer um programa que lê a quantidade de anos, meses e dias e calcula o total de dias (só use a função
main) .
*/

void main(){
    int anos, mes, dia, calculo;


    printf("Entre com o numero de anos: ");
    scanf("%d", &anos);

    printf("Entre com o numero de meses: ");
    scanf("%d", &mes);
    
    printf("Entre com o numero de dias: ");
    scanf("%d", &dia);

    calculo = (anos*365) + (mes*30) + dia ;

    printf("O numero de dias e : %d", calculo);



}