#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Identifique os erros de compila��o que seriam detectados nos seguintes programas:\n");
    printf("N�o iria reportar nenhum erro de compila��o. Talvez apenas um warning por n�o incluir o que o main devia retornar.\n");
}
