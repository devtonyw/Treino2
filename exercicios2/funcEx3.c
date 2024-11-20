#include <stdio.h>

/*Ler o raio de uma circunferência e calcular a área e perímetro sabendo que: Área = π r2 e Perímetro = 2 π r .
Declarar o raio, a área e o perímetro como variável global. Fazer a função f_leitura (para ler o raio) , a
função f_area (cálculo da área), a função f_perimetro (cálculo do perímetro) e a função f_imprime para
imprimir os resultados.*/

//Area = pi*(raio*raio)
//Perimetro = 2*pi*raio

float raio, area, perimetro; 

#define PI 3.14 

void f_leitura(){
    printf("Entre com o raio: ");
    scanf("%f", &raio);
}

void f_area(){
    area = PI*(raio*raio);

}

void f_perimetro(){
    perimetro = 2*PI*raio ;

}

void f_imprime(){
    printf("A area e %f", area);
    printf("O perimetro e %f", perimetro);
}

void main(){
    f_leitura();
    f_area();
    f_perimetro();
    f_imprime();
}