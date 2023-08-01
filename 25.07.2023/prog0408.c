#include <stdio.h>

void main()
{
    int i,j;

    for (i=0; i<=3; i++)
    {
        for (j=1; j<=10; j++)
            printf("%2d X %2d = %2d\n", i,j,i*j);
            if (i!=5)
            {
                printf("pressine <ENTER> para continuar....");
                getchar();
            }

    }
}
