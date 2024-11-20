#include <stdio.h> 

/*Refazer o ex.5 da seguinte forma: fazer um programa que contém uma função (f_amd_dias) que recebe
quantidades de anos, meses e dias e calcula (retorna) o total de dias. */

int f_amd_dias(int ano, int mes, int dia, int calculo){

    printf("Entre com a quantidade de anos: ");
    scanf("%d", &ano);

    printf("Entre com a quantidade de mes: ");
    scanf("%d", &mes);

    printf("Entre com a quantidade de dia: ");
    scanf("%d", &dia);

    calculo = (ano*365) + (mes*30) + dia ;

    return calculo;
}

void main(){
    int ano, mes, dia, calculo;

    printf("O numero de dias e %d", f_amd_dias(ano, mes, dia, calculo));

}


