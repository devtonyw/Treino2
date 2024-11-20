#include <stdio.h>

/*Faça um programa que leia uma quantidade não determinada de números positivos. Calcule e
imprima a quantidade de números pares e ímpares, a média dos valores pares e a média dos valores
impares. O número que encerrará a leitura será zero.*/

void main(){
    int vet[100], num, par, impar, media_par, media_impar, i, count_par, count_impar;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    while(num != 0){
        if(num % 2 == 0) {
            par ++ ; 

            num += vet[i] ; 
            
        }
        else{
            impar ++ ; 

            num += vet[i] ; 
    }
    printf("Entre com um numero: ");
    scanf("%d", &num);   
}

media_impar = count_impar/impar ;
media_par = count_par/par;

printf("A media dos pares sao: %d", media_par);
printf("A media dos pares sao: %d", media_impar);

}