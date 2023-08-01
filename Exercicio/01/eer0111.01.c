#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Identifique os erros de compilação que seriam detectados nos seguintes programas:\n");
    printf("Nesse programa, o compilador iria informar que está faltando parenteses na frente da função main..\n");
}
