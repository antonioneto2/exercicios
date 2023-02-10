#include <stdio.h>
#include <stdlib.h>

typedef struct professor
{
    int mat;
    char nome[50];
} Professor;

typedef struct disciplina
{
    int carga_horaria;
    char nome[50];
    Professor professor;
} Disciplina;

typedef struct aluno
{
    char nome[50];
    int matricula;
    Disciplina *disciplina;
} Aluno;

int main()
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL)
    {
        exit(1);
    }
    aluno->disciplina = (Disciplina *)malloc(sizeof(Disciplina));
    printf("Informe um nome: ");
    scanf(" %[^\n]s", aluno->nome);
    printf("Informe o nome da dsiciplina: ");
    scanf(" %[^\n]s", aluno->disciplina->nome);
    return 0;
}