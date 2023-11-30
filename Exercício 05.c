/*
Exercício 5: 

Desenvolva um programa que registre as vendas de uma loja, 
armazenando os valores em um vetor e apresentando o total de
vendas ao final. Considere que cada venda precisa do nome de 
um produto, seu preço e sua quantidade. 
Crie um menu onde o usuário possa digitar o número 1 para adicionar
uma venda e o número 2 para sair do menu e exibir o total das vendas 
realizadas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i = 0;
    int j = 0;
    char nomedoproduto[200][1000];
    float preco[200];
    int quantidade[1000];
    int opcao = 0;
    float totaldevendas = 0;

    do
    {
       printf("--------------------- M E N U ---------------------");
        printf("\nDigite o número referente ao o que você deseja\n");
        printf("        1. Para adicionar venda\n");
        printf("        2. Para exibir o total das vendas\n");
        scanf("%d", &opcao);
        printf("\n");

        if ( opcao == 1)

        {
            printf("Digite o nome do produto: ");
            scanf("%s", &nomedoproduto[i]);

            printf("Digite o preço do produto: ");
            scanf("%f", &preco[i]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[i]);

            totaldevendas = totaldevendas + (preco[i] * quantidade[i]);
            i = i ++;
        }
        


    } while (opcao == 1);

    printf("O total de vendas foi de R$ %.1f\n", totaldevendas);

    return 0;
}