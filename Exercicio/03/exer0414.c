#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("Se uma vari]avel x se encontra isolada, ++x e x++ s�o equivalentes?");
    puts("N�o. N�o s�o equivalentes. No primero caso, o valor � incrementado antes de ser utlizada e no segundo primeiro � utilizada s� depois � incrementada.");

}
