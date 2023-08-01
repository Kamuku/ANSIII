#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("O nome de uma variável...\n");
    printf("a) Deve indicar aquilo que ela armazena\n");
    printf("d) Deve ser o mais explicito possível.\n");
    printf("f) Pode mas não deve começar por underscore (_)\n");
    printf("g) Pode conter mais do que um caractere.\n");
}
