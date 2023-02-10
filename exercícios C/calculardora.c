#include <stdio.h>
int main()
{
    int cont, v;
    float num1, num2, op;
    printf(" \t1- Para adicao\n ");
    printf(" \t2- Para subtracao\n");
    printf(" \t3- Para multiplicacao\n");
    printf(" \t4- Para divisao\n");
    printf("Digite a operacao: ");
    scanf("%f", &op);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    if (op == 1)
    {
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    }
    if (op == 2)
    {
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    }
    if (op == 3)
    {
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    }
    if (op == 4)
    {
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
    }
}