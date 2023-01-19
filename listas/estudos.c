#include <stdio.h>

void inverte(int vetor[], int n)
{
    int auxiliar[n];
    int index;
    for (index = 0; index < n; index++)
    {
        auxiliar[index] = vetor[index];
    }
    for (index = 0; index < n; index++)
    {
        vetor[index] = auxiliar[n - 1 - index];
    }
}

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    inverter(vetor, 5);
    int cont;
    for (cont = 0; cont < 5; cont++)
    {
        printf("%d\t ", vetor[cont]);
    }
}
