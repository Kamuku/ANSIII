#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Indique, na seguinte lista, quais os identificadores corretos e incorretos de vari�veis:");
    printf("\nOs identificadores de variaveis que est�o corretos s�o os que est�o nas seguintes al�neas:\na) Valor\nd) a+b\nf) MENOS\nh) a10\nj) F1\n\nOs de outras alineas, s�o incorretos.\n");

}
