#include <stdio.h>
#include <locale.h>

void main()
{
    int x, y;

    setlocale(LC_ALL, "Portuguese");
    puts("Identifique os erros de compilação que seriam detectados nos seguintes programas.\n");
    printf("Iria dar erro de compilação por haver duas variaveis com o mesmo nome.\n");
}
