#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");

    int i;
    for(i=1; i<=20; i++)
        putchar('*');
    putchar('\n');

    puts("N�meros entre 1 e 5");

    for(i=1; i<=20; i++)
        putchar('*');
    putchar('\n');

    for(i=1; i<=5; i++)
        printf("%d\n",i);

    for(i=1; i<=20; i++)
        putchar('*');
    putchar('\n');
}
