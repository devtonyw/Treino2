#include <stdio.h>

/*Definir uma estrutura TAluno para armazenar os seguintes dados de um aluno:
• Matricula (inteiro);
• Sexo (caracter);
• Idade (inteiro);
• MediaGlobal (real).*/

void main(){
    struct TAluno
    {
        int matricula;
        char sexo[10];
        int idade;
        float mediaGlobal;
    };

struct TAluno alunoA, alunoB;

printf("Entre com a matricula: ");
scanf("%d", &alunoA.matricula);
printf("Entre com o sexo do aluno: ");
scanf("%s",&alunoA.sexo);
printf("Entre com a idade do aluno: ");
scanf("%d",&alunoA.idade);
printf("Entre com a media do aluno: ");
scanf("%f",&alunoA.mediaGlobal);

printf("Entre com a matricula: ");
scanf("%d", &alunoB.matricula);
printf("Entre com o sexo do aluno: ");
scanf("%s",&alunoB.sexo);
printf("Entre com a idade do aluno: ");
scanf("%d",&alunoB.idade);
printf("Entre com a media do aluno: ");
scanf("%f",&alunoB.mediaGlobal);

printf("\n---Dados do aluno A---");
printf("\nA matricula e %d", alunoA.matricula);
printf("\nO sexo e %s", alunoA.sexo);
printf("\nA idade e %d", alunoA.idade);
printf("\nA media e %f", alunoA.mediaGlobal);

printf("\n---Dados do aluno B---");
printf("\nA matricula e %d", alunoA.matricula);
printf("\nO sexo e %s", alunoA.sexo);
printf("\nA idade e %d", alunoA.idade);
printf("\nA media e %f", alunoA.mediaGlobal);

if (alunoA.idade > alunoB.idade){
    printf("\nA matricula do aluno mais velho e do aluno A: %d", alunoA.matricula);
}
else{
    printf("\nA matricula do aluno mais velho e do aluno B: %d", alunoB.matricula);
}

if (alunoA.mediaGlobal > alunoB.mediaGlobal){
    printf("\nA matricula do aluno com maior media e do aluno A: %d", alunoA.matricula);
}
else{
    printf("\nA matricula do aluno com maior media e do aluno B: %d", alunoB.matricula);
}
    
}