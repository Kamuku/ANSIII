#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("Se uma vari]avel x se encontra isolada, ++x e x++ são equivalentes?");
    puts("Não. Não são equivalentes. No primero caso, o valor é incrementado antes de ser utlizada e no segundo primeiro é utilizada só depois é incrementada.");

}
