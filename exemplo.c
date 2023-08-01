#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");

    char ch;

    printf("Aperte c para testar:  ");scanf("%c",&ch);
    if(ch=='c' || ch== 'C')
        printf("Apeertou C");
    else
        printf("Nâo apertou C");
}
