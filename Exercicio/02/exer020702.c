#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Identifique os erros de compila��o que seriam detectados nos seguintes programas.\n");
    printf("O compilador iria dar erro de compila��o pois usou-se a palavra reserva \"int\" como vari�vel e isso � inadmissivel.\n");
}
