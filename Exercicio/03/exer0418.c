#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    i=0;
    puts("Qual é a diferença entre os dois trechos de código?");
    puts("O primeiro vai usar a varivel e depois incrementala. Já o segundo, primeiro vai icrementar, só depois vai usar a variável, gerando um loop infinito.");
}
