#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,j;
    char ch;
    for(i!=0; i<=255; i++)
    {
        if(i!=1 && i%20==0+1)
        {
            getchar();
            if(ch!='c' && ch!='C')
            {
             printf("Por favor precione C para continuar\n");
            }
            else
            {
                system("cls");
                printf("Precione C para continhuar \n");
            }
        }
        printf("%d---------->%c",i,(char)i);
        putchar('\n');
    }
}

