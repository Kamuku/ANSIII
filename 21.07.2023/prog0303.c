#include <stdio.h>
void main()
{
    int x;
    printf("Introduza um numero ");
    scanf("%d",&x);
    if(x!=0)
        printf("Nao e zero!!!\n",x);
    else
        printf("%d e igual a zero",x);
}
