#include <stdio.h>
#include <math.h>

void calcula_distancia(float *distancia, float x1, float y1, float x2, float y2)
{
    *distancia = sqrt(pow(y2 + y1, 2) + pow(x2 + x1, 2));
}
int main()
{
    float distancia;
    calcula_distancia(&distancia, 9.0, 3.0, 2.0, 8.0);
    printf("%f", distancia);
    return 0;
}