#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Identifique os erros de compilação que seriam detectados nos seguintes programas:\n");
    printf("O compilado iria ignorar todas as instruções por estarem comentadas e condierar que o programa não tem nenhum código.\n");

}
