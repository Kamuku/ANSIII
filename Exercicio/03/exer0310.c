#include <stdio.h>

void main()
{
    int n;
    while(n<=99)
    {
    printf("Introduza Um numero entre 1 e 100.\n");scanf("%d",&n);
    if(n>=0 && n <=100)
        printf("Voce introduziu %d\n",n);
    else
        printf("Tens de introduzir um numero entre 1 e 100");
    }
}
