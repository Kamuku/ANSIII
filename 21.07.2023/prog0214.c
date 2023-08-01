#include <stdio.h>

void main()
{
    int num;
    printf("Introduza um inteiro: ");
    scanf("%d",&num);
    printf("Foi introduzido %d cujo caratere = '%c'\n",num,(char) num);
    printf("O caratere seguinte ='%c' tem o ASCII numero %d\n", (char) (num+1),num+1);
}
