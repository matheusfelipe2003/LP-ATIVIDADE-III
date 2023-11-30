/*
Exercício 2: 
Crie um programa que faça o cadastro de 5 alunos em uma escola,
armazenando seus dados como: nome, idade e  3 notas  para cada aluno.
Ao final, mostre todos os dados dos alunos como: nome, idade, as notas
e a média.
Após calcular a média, verifique para cada aluno se este estará aprovado 
(média maior ou igual a 7,0), em recuperação 
(média menor que 7,0 e maior ou igual a 5,0) ou reprovado 
(média menor que 5,0) com base nestes critérios.
*/

#include <stdio.h>

int main()
{
    int i;
    int j;
    char aluno [5] [400];
    float nota [5] [3];
    int idade [5];
    int somadasnotas = 0;
    float media [3];

    for (i = 0; i < 5; i++ )
    {
        printf("\nDigite o nome do aluno: ");
        gets(aluno [i]);

        printf("Digite a idade do aluno: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite uma nota: ");
            scanf("%f", &nota[i] [j]);

            somadasnotas += nota[i][j];
        }

        media [i] = somadasnotas / (float)j;
        somadasnotas = 0;

        fflush(stdin);
    }

    system("cls || clear");
    printf("\nExibindo os dados dos alunos:");

    for ( i = 0; i < 5; i++){
        printf("\nAluno: %s \n", aluno[i]);
        printf("Idade: %d\n", idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Nota: %.1f \n", nota[i][j]);
        }

        printf("Média: %1.f \n", media[i]);

        if (media[i] >= 7){
            printf("PARABÉNS VOCÊ ESTÁ APROVADO :)\n");
        } else if (media[i] >= 5) {
            printf("VOCÊ ESTÁ EM RECUPERAÇÃO! \n");
        } else {
            printf("VOCÊ ESTÁ REPROVADO :( \n");
        }
    }

    return 0;
}