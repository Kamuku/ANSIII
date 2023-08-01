#include <stdio.h>
#include <locale.h>

void main()
{
    int x = 0;

    setlocale(LC_ALL, "Portuguese");
    puts("Identifique os erros de compilação que seriam detectados nos seguintes programas.\n");
    printf("Iria dar erro de declaração de variável. para se atribuir um mesmo valor a diferentes variaveis, temos de primeiro inicializar e só depois atribuir.\n");

}
