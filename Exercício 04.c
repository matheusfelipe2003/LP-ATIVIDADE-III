/*
Exercício 4: 
Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
A quantidade de números ímpares;
A quantidade de números negativos;
O maior e o menor número;
A média de números pares;
A média de números inseridos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int numeros[5];
    int pares = 0;
    int impares = 0;
    int somaimpar = 0;
    int positivos = 0;
    int negativos = 0;
    int somapares = 0;
    float mediapares = 0;
    int somageral = 0;
    float mediageral = 0;
    int numeromaior = 0;
    int numeromenor = 99999;
    int quantidade = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        quantidade++;
        somageral += numeros[i];

        if (numeros[i] % 2 == 0) {
            pares++;
            somapares += numeros[i];
        }else{
            impares++;
            somaimpar += numeros[i];
        }

        if (numeros[i] > 0) {
            positivos++;
        } else {
            negativos++;
        }

        numeromaior = numeros[i] > numeromaior ? numeros[i] : numeromaior;
        numeromenor = numeros[i] < numeromenor ? numeros[i] : numeromenor;
    }

    if (pares > 0) {
        mediapares = somapares / (float) pares;
    }
    mediageral = somageral / (float) i;
    
    system ("cls || clear");
    printf("Resultado");
    
    for (i = 0; i < 5; i++)
    {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    printf("\nQuantidade de números ímpares: %d\n", impares);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Maior número: %d\n", numeromaior);
    printf("Menor número: %d\n", numeromenor);
    printf("Média de números pares: %.1f\n", mediapares);
    printf("Média dos números inseridos: %.1f\n", mediageral);

    return 0;
}