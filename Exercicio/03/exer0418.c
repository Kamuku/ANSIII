#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    i=0;
    puts("Qual � a diferen�a entre os dois trechos de c�digo?");
    puts("O primeiro vai usar a varivel e depois incrementala. J� o segundo, primeiro vai icrementar, s� depois vai usar a vari�vel, gerando um loop infinito.");
}
