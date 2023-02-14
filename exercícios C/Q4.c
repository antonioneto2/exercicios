#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[50];
    int matricula;
} Aluno;

int main()
{
    int qtd_alunos, index;
    printf("Qauntos alunos?");
    scanf("%d", &qtd_alunos);
    Aluno **vetor = (Aluno **)malloc(qtd_alunos * sizeof(Aluno *));
    if (vetor == NULL)
    {
        printf("ERRO!");
        exit(1);
    }

    for (index = 0; index < qtd_alunos; index++)
    {
        printf("\nDigite o nome: ");
        scanf(" %[^\n]s", vetor[index]->nome);
        printf("Digite a matricula: ");
        scanf("%d", &vetor[index]->matricula);
        printf("\n");
        printf("|Dados| \nNome: %s \nMatricula: %d\n", vetor[index]->nome, vetor[index]->matricula);
    }
    for (index = 0; index < qtd_alunos; index++)
    {
        free(vetor);
    }
    return 0;
}
