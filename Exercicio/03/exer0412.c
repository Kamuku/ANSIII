#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, a,b, menor, maior;

    printf("Introduza dois números de 0 à 255 inteiros. ");scanf("%d %d",&menor,&maior);
    fflush(stdin);
    if(menor <  maior)
    {
        a=menor;
        b= maior;
    }
    else
    {
        a=maior;
        b = menor;
    }

        for(i=a ; i<=b ; i++)
        {
        printf("%d ---------> %c",i,(char)i);
        putchar('\n');
        }
}
