#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Embora os programas que se seguem não tenham erros de compilação, identifique as causas de possível mau funcionamento.\n");
    printf("Foi declarada uma variavel inteira e está a se pedir que se faça a entrada de um real. O compilador iria tratar o numero como um real e não como um inteiro que é o que se deseja.\n");
}
