#include <stdio.h>
#include <locale.h>

void main()
{
    int d,m,a;

    setlocale(LC_ALL, "Portuguese");
    puts("Escreva uma data qualquer.\n");scanf("%d %d %d",&d,&m,&a);

   printf("Voc� digitou %d/%d/%d",d,m,a);
}
