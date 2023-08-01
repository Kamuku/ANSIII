#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Para que serve a linha \"#include\"?");
    puts("A linha \"#include\" serve para incluir bibliotecas que contenham os cabeçarios das funções que queremos usar.");
}
