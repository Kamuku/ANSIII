#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("O nome de uma vari�vel...\n");
    printf("a) Deve indicar aquilo que ela armazena\n");
    printf("d) Deve ser o mais explicito poss�vel.\n");
    printf("f) Pode mas n�o deve come�ar por underscore (_)\n");
    printf("g) Pode conter mais do que um caractere.\n");
}
