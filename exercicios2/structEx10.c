#include <stdio.h>

/*Seja uma estrutura para descrever os carros de uma revendedora com os seguintes campos:
• marca: string de tamanho 15;
• ano: inteiro;
• cor: string de tamanho 10;
• preço: real;
*/

void main(){

    int anoteste ;

    struct carro{
        char marca[15];
        int ano;
        char cor[10];
        float preco;
    };

struct carro car1, car2;

printf("Entre com a marca do carro 1: ");
scanf("%s", &car1.marca);

printf("Entre com o ano do carro 1: ");
scanf("%d", &car1.ano);

printf("Entre com a cor do carro 1: ");
scanf("%s", &car1.cor);

printf("Entre com o preco do carro 1: ");
scanf("%f", &car1.preco);

printf("Entre com a marca do carro 2: ");
scanf("%s", &car2.marca);

printf("Entre com o ano do carro 2: ");
scanf("%d", &car2.ano);

printf("Entre com a cor do carro 2: ");
scanf("%s", &car2.cor);

printf("Entre com o preco do carro 2: ");
scanf("%f", &car2.preco);

/*Ler os dados de dois carros (car1 e car2), calcular e imprimir:
• Os dados do carro mais barato;
• Ler um ano fornecido pelo usuário e verificar se tem carro desse ano ou mais novo;
• Ler um nome de carro fornecido pelo usuário e verificar se tem carro dessa marca.*/

if (car1.preco < car2.preco){
    printf("\nMarca:%s \nAno:%d \nCor:%s \nPreco:%f ", car1.marca, car1.ano,car1.cor,car1.preco);
}
else{
    printf("\nMarca:%s \nAno:%d \nCor:%s \nPreco:%f ", car2.marca, car2.ano,car2.cor,car2.preco);
}

printf("Entre com o ano: ");
scanf("%d", &anoteste);

if(anoteste<= car1.ano){
    printf("%s", car1.marca);
}
else{
    print("%s", car2.marca);
}

}