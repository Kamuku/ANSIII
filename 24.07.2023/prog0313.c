#include <stdio.h>

void main()
{
    char Est_Cilvil;
    puts("Qual o estado Civil:");
    Est_Cilvil = getchar();

    switch(Est_Cilvil)
    {
        case 'c':
        case 'C':printf("Casado!");break;
        case 's':
        case 'S':printf("Solteiro!");break;
        case 'd':
        case 'D':printf("Divorciado");break;
        case 'v':
        case 'V':printf("Viuvo");break;
        default:printf("Estado civil incorreto!");
    }
}
