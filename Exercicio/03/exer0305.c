#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    puts("Qual a diferen�a de execu��o instru��o break quando presesente em um for e em um while? ");
    puts("A diferen�a de execu��o instru��o break quando presesente em um for e em um while � de que no for, ela finaliza o la�o quando a instru��o a condi��o � verdadeira e no While, ela finaliza e volta no come�o para reanalizar a condi��o.");
}
