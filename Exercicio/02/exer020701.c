#include <stdio.h>
#include <locale.h>

void main()
{
    int x, y;

    setlocale(LC_ALL, "Portuguese");
    puts("Identifique os erros de compila��o que seriam detectados nos seguintes programas.\n");
    printf("Iria dar erro de compila��o por haver duas variaveis com o mesmo nome.\n");
}
