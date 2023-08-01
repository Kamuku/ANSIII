#include <stdio.h>
#include <locale.h>

void main()
{
    int d,m,a;

    setlocale(LC_ALL, "Portuguese");
    puts("Escreva uma data no formato aaa-mm-dd.\n");scanf("%d %d %d",&a,&m,&d);

   printf("Você digitou %d/%d/%d",d,m,a);
}
