#include <stdio.h>
#include <locale.h>

linha()
{
    int i;
        for(i=1; i<=20; i++)
            putchar('*');
        putchar('\n');
}
void main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    linha();
    puts("Números entre 1 e 5");
    linha();
    for(i=1; i<=5; i++)
        printf("%d\n",i);
    linha();
}
