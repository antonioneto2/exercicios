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
    Disciplina disciplina;
} Aluno;

int main()
{
    Aluno aluno;

    aluno.disciplina.professor.nome = 'Neto';
    return 0;
}