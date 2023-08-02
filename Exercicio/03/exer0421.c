#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("        x       y       z\n");
    printf("        5       10      7\n\n");
    printf("x ++;             x= 6\n");
    printf("y *= (z++ +2);    Y=72\n");
    printf("y = !x;           V\n");
    printf("z = (x%2) + --y;    Z=10\n");
    printf("z= (x == y);      F\n");
    printf("!z;               5040\n");
    printf("z %%;              0.875\n");

}
