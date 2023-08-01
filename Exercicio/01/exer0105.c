#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Para que serve a linha\"#include <stdio>\"?");
    puts("A linha \"#include <stdio.h>\" serve para incluir a biblioteca\nque contem as funções de entrada e saida de dados do computador.");
}
