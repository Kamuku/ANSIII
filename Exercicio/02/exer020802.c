#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Embora os programas que se seguem n�o tenham erros de compila��o, identifique as causas de poss�vel mau funcionamento.\n");
    printf("Foi declarada uma variavel inteira e est� a se pedir que se fa�a a entrada de um real. O compilador iria tratar o numero como um real e n�o como um inteiro que � o que se deseja.\n");
}
