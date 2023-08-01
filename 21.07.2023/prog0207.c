#include <stdio.h>
void main()
{
    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("Introduza o Raio da circunferencia: ");
    scanf("%f", &raio);
    area =Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("A area = %f\nPerimetro = %f\n",area,perimetro);
}
