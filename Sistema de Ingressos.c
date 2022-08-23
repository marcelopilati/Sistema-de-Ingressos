#include <stdio.h>
void main(){

    int ingressos = 0, cadeiras_disponiveis = 20;

    printf("Ingressos de Cinema\n");
    printf("Cadeiras Disponiveis: %d\n\n", cadeiras_disponiveis);

    while(cadeiras_disponiveis > 0){

    printf("Digite quantos ingressos deseja comprar: ");
    scanf("%d", &ingressos);

    if(ingressos > cadeiras_disponiveis){
        printf("Voce tentou comprar %d ingressos\n\n", ingressos);
        printf("Cadeiras Disponiveis: %d\n\n", cadeiras_disponiveis);
    }
    else{
        cadeiras_disponiveis = cadeiras_disponiveis - ingressos;
        printf("Voce comprou %d ingressos\n", ingressos);

        if(cadeiras_disponiveis == 0){
            printf("Nao ha mais cadeiras disponiveis\n\n");
            break;}
        else{
            printf("Cadeiras disponiveis: %d\n\n", cadeiras_disponiveis);
        }
    }
        }
    }
