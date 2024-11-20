#include <stdio.h>

/*Suponha que você esteja desenvolvendo o sistema de um hotel que deva exibir mensagens na recepção para diferentes ações dos hospedes, são elas:

1 - Fazer Check-in
2 - Chamar serviço de quarto
3 - Fazer pedido*/

void main(){
    int num ;

    printf("Digite 1 Para Fazer Check- in\n Digite 2 para Servico de quarto\n digite 3 para fazer pedido:");
    scanf("%d", &num);

    switch (num){
        case 1:
            printf("Faca check");
            break;
        case 2:
            printf("Faca servico");
            break;
        case 3:
            printf("Faca pedido");
            break;

    }
}