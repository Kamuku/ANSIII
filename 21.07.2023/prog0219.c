#include <stdio.h>
void main()
{
    float x;
    printf("Introduza um numero real:");
    scanf("%f",&x);
    printf("Parte inteira :%d\n", (int) x);
    printf("Parte fraccionaria: %f", x- ((int) x));
}
