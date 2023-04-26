//faça um programa que receba como dados de entrada 5 números inteiros e mostre como resultado:
//letra a qual foi o maior número digitado:
//letra b qual foi o menor numero digitado:
//- observação usar no máximo quatro variáveis.


#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main()
{
    int valor, maior=0, menor=9999, cont;

        for(cont=0, cont<4, cont++){
            printf("Digite o valor");
            scanf("%d", &cont);

            if(valor > maior){
                maior=valor;
            }
            if(valor < menor){
                menor=valor;

            }
        }
        printf("\n O maior valor foi %d", maior);
        printf("\n O menor valor foi %d", menor);


    }
