#include <stdio.h>

/*Reescrever o exercício anterior da seguinte forma: declarar as notas e a media como variável local (dentro de
main) e passar como parâmetros para a função f_media. A função f_media recebe os argumentos (as tres
notas) , calcula a média e a retorna. A função main recebe o valor retornado e imprime esse valor.*/



float f_media(float nota1, float nota2, float nota3, float media){
    media = ((nota1*2) + (nota2*3) + (nota3*4))/3 ;
    return media;
}


void main(){

float nota1, nota2, nota3, media;

    printf("Entre com a nota da primeira prova:");
    scanf("%f", &nota1);
    printf("Entre com a nota da segunda prova:");
    scanf("%f", &nota2);
    printf("Entre com a nota da terceira prova:");
    scanf("%f", &nota3);
    
    printf("Sua media foi de %f", f_media(nota1, nota2, nota3, media));
    

}  

//correto