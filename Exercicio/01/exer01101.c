#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Identifique os erros de compilação que seriam detectados nos seguintes programas:\n");
    printf("Não iria reportar nenhum erro de compilação. Talvez apenas um warning por não incluir o que o main devia retornar.\n");
}
