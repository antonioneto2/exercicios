#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto
{
    float x;
    float y;
} Ponto;

typedef struct circulo
{
    Ponto p;
    float r;
} Circulo;

float interior(Circulo *c, Ponto *p)
{
    float d = distancia(&c->p, p);
    return (d < c->r);
}

float distancia(Ponto *p, Ponto *q)
{
    float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
    return (d);
}

int main()
{
    float i;
    float n, n1;
    n = 8;
    n1 = 9;
    i = interior(&n, &n1);
    if (i != 0)
    {
        printf("Verdadeiro");
    }
    else
    {
        printf("Falso");
    }
}