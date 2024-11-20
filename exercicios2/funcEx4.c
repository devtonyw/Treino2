#include <stdio.h>

/*Reescrever o exercício anterior da seguinte forma:
• Declarar o raio, área, perim como variável local (dentro de main) .
• A função main lê o raio e passa raio como parâmetro para a função f_area e também para a função
f_perimetro .
• A função f_area recebe o argumento (raio) , calcula a área e a retorna.
• A função f_perimetro recebe o argumento (raio) , calcula a o perimetro e o retorna.
• A função main recebe os valores retornados por essas duas funções e imprime esses valores. */

#define PI 3.14

float f_area(float raio, float area){
    area = PI*(raio*raio);

    return area;
}

float f_perimetro(float raio, float perimetro){
    perimetro = 2*PI*raio ;

    return perimetro;
}

void main(){

    float raio, area, perimetro; 

    printf("Entre com o raio: ");
    scanf("%f", &raio);

    printf("A area e %f", f_area(raio, area));
    printf("O perimetro e %f", f_perimetro(raio, perimetro));
   
}