#include <stdio.h>

void main()
{
    int i,j, r;
    char ch,barra;
    ch = '*';
    printf("Introduza um numero de ramos da arvore de natal de 1 a 10. ");
    scanf("%d",&r);
    for(i=1; i<=6; i++)
    {
     for(j=1; j<=i ;j++)
            printf("%c",ch);
            putchar('\n');
    }
    switch(r)
    {
        case 1:printf("  |");
        break;
        case 2:printf("  ||");
        break;
        case 3:printf("  |\n | |");
        break;
        case 4:printf("  ||\n  ||");
        break;
        case 5:printf("  /\\ \n /| \\");
        break;
        case 6:printf(" /\\ \n/||\\");
        break;
        case 7:printf("/|\\");
        break;
        case 8:printf("/||\\");
        break;
        default:printf("Desculpa, tens de inserir um numero.");
    }
    printf("",barra);






}
