#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Indique, na seguinte lista, quais os identificadores corretos e incorretos de variáveis:");
    printf("\nOs identificadores de variaveis que estão corretos são os que estão nas seguintes alíneas:\na) Valor\nd) a+b\nf) MENOS\nh) a10\nj) F1\n\nOs de outras alineas, são incorretos.\n");

}
