#include <stdio.h>

void main()
{
    int x;

    printf("Introduza um numero ");
    scanf("%d",&x);
    if (x>=0)
        printf("Numero positivo");
    else
        printf("numero negativo.");
}
