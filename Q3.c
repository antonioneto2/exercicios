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
    Aluno aluno;
    printf("Informe o nome: ");
    scanf("%[^\n]", aluno.nome);
    printf("Informe seu matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Informe a disciplina: ");
    scanf("%d", &aluno.disciplina.matricula);
    printf("Informe seu carga horaria: ");
    scanf("%d", &aluno.disciplina.carga_horaria);

    return 0;
}