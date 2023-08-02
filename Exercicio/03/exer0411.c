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
            while(1)
            {
                printf("Pressione C para continuar ");
                ch=getchar();
                if(ch=='c'||ch=='C') break;
                system("cls");
            }
             getchar();
             system("cls");
        }

        printf("%d---------->%c",i,(char)i);
        putchar('\n');

    }
}

