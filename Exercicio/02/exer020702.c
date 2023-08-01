#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Identifique os erros de compilação que seriam detectados nos seguintes programas.\n");
    printf("O compilador iria dar erro de compilação pois usou-se a palavra reserva \"int\" como variável e isso é inadmissivel.\n");
}
