#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Associe os seguintes tipos aos formatos de leitura e escrita.\n");
    printf("int    ----> %%d\n");
    printf("float  ----> %%f\n");
    printf("char   ----> %%c\n");
    printf("short  ----> %%hd\n");
    printf("long   ----> %%ld\n");
    printf("signed ----> %%e\n");

}
