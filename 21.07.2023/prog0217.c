#include <stdio.h>
void main()
{
    int a, b;
    printf("Insere os numeros que queres somar separando-os com a barra de espaco.\n");
    scanf("%d %d",&a,&b);
    fflush(stdin);
    printf("");
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d X %d = %d\n",a,b,a*b);
    printf("%d : %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    }
