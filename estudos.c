#include <stdio.h>
#include <math.h>
int main()
{
    float imc, peso, alt;
    printf("Digite seu peso em kg:\n");
    scanf("%f", &peso);
    printf("Digite sua altura:\n");
    scanf("%f", &alt);
    imc = peso / pow(alt, 2);
    printf("Seu IMC = %.2f\n", imc);
}