#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    puts("Qual a diferença de execução instrução break quando presesente em um for e em um while? ");
    puts("A diferença de execução instrução break quando presesente em um for e em um while é de que no for, ela finaliza o laço quando a instrução a condição é verdadeira e no While, ela finaliza e volta no começo para reanalizar a condição.");
}
