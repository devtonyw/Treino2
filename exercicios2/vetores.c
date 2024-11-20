#include <stdio.h>

/*As notas de uma turma de N alunos são lidas e armazenadas em um vetor. Fazer um programa
contendo funções para:
• ler as N notas, armazenando-as em um vetor (este deve ser variável global);
• calcular e retornar a média da turma;
• receber o valor da media calculada como parâmetro e retornar a porcentagem de pessoas acima
da média.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Array para armazenar a string
    int i, n;

    // Lê a string do usuário
    printf("Digite uma string: ");
    scanf("%s", str);
    
    // Remove a nova linha do final da string, se houver
    str[strcspn(str, "\n")] = '\0';

    n = strlen(str); // Obtém o comprimento da string

    printf("String invertida: ");
    // Imprime a string de trás para frente
    for (i = n - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}