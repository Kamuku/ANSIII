#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    puts("Qual a diferença de execução instrução continue quando presesente em um for e em um while? ");
    puts("Nenhuma. Nos dois laços tem exatamente a mesma função.");
}
