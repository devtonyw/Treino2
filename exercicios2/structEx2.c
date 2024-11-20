#include <stdio.h>

/*Seja uma estrutura para armazenar dados de livros (TLivro) de uma livraria contendo os campos para
as seguintes informações:
• nome: string;
• preço: real;
• número de exemplares: inteiro;
• última edição: caracter (s/n);
Ler os dados de três livros, calcular e imprimir:
• Nome dos livros que estão na ultima edição;
• Valor total do estoque de produtos da livraria;
• Quantidade total de livros.
*/

void main(){
    struct TLivro {
        char nome[100];
        float preco;
        int exemplares;
        char ultedit[3];

    } livroA, livroB, livroC;

printf("\nEntre com o nome do livro A: ");
scanf("%s",&livroA.nome);
printf("\nEntre com o preco do livro A: ");
scanf("%f",&livroA.preco);
printf("\nEntre com o numero de exemplares do livro A: ");
scanf("%d",&livroA.exemplares);
printf("\nO livro A e ultima edicao S para sim e N para nao: ");
scanf("%c",&livroA.ultedit);

printf("\nEntre com o nome do livro B: ");
scanf("%s",&livroB.nome);
printf("\nEntre com o preco do livro B: ");
scanf("%f",&livroB.preco);
printf("\nEntre com o numero de exemplares do livro B: ");
scanf("%d",&livroB.exemplares);
printf("\nO livro B e ultima edicao S para sim e N para nao: ");
scanf("%c",&livroB.ultedit);

printf("\nEntre com o nome do livro C: ");
scanf("%s",&livroC.nome);
printf("\nEntre com o preco do livro C: ");
scanf("%f",&livroC.preco);
printf("\nEntre com o numero de exemplares do livro C: ");
scanf("%d",&livroC.exemplares);
printf("\nO livro C e ultima edicao S para sim e N para nao: ");
scanf("%c",&livroC.ultedit);

printf("---Dados Livro A---");

printf("Nome: %s", livroA.nome);
printf("Preco: %f", livroA.preco);
printf("Numero de exmeplares: %d", livroA.exemplares);
printf("Ultima edicao: %c", livroA.ultedit);

printf("---Dados Livro B---");

printf("Nome: %s", livroB.nome);
printf("Preco: %f", livroB.preco);
printf("Numero de exmeplares: %d", livroB.exemplares);
printf("Ultima edicao: %c", livroB.ultedit);

printf("---Dados Livro C---");

printf("Nome: %s", livroC.nome);
printf("Preco: %f", livroC.preco);
printf("Numero de exmeplares: %d", livroC.exemplares);
printf("Ultima edicao: %c", livroC.ultedit);


}