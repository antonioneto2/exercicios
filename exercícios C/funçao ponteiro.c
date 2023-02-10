#include <stdio.h>

int soma(int x, int y)
{
    return x + y;
}

int multiplicacao(int x, int y)
{
    return x * y;
}
int calcula(int x, int y, int(pointer)(int, int))
{
    return (*pointer)(x, y);
}
int main()
{
    int resultado = calcula(5, 3, multiplicacao);
    printf("%d", resultado);
    return 0;
}