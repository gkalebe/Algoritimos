//Faça um programa que receba como dados de entrada, o valor de 5 vendas e mostre como resultado 
//Letra A: Quantras vendas foram maiores que 500:
//Letra B: Qual foi a média das vendas:
//Observação: utilizar no máximo quatro variáveis e nãu utilizar vetor


#include <stdio.h>
#include <stdlib.h>


int main() {
    float venda, soma = 0;
    int vendas_maiores_500 = 0;
    int num_venda;

    for (num_venda = 1; num_venda <= 5; num_venda++) {
        printf("Digite o valor da venda %d: ", num_venda);
        scanf("%f", &venda);

        soma += venda;

        if (venda > 500) {
            vendas_maiores_500++;
        }
    }

    float media = soma / 5;

    printf("Quantidade de vendas maiores que 500: %d\n", vendas_maiores_500);
    printf("Média das vendas: %.2f\n", media);

    
}

