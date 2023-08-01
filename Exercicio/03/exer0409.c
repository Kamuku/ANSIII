#include <stdio.h>

void main()
{
    int i,j, r;
    char ch = 'A';
    puts("Introuduza um noumero de 3 a 5");
    scanf("%d",&r);
    if(r<3 || r<=5)
    {
        for (i=0; i<=r; i++)
        {
            for(j=0; j<=i ;j++)
            {
                printf("%c",ch+i);

            }
            putchar('\n');
        }
    }
    else
        printf("Desculpa, tens de inserir um numero valido.");
}
