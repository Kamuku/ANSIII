#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("Pode se utlizar os operadores ++ e -- em constantes?");
    puts("N�o. N�o se pode utilizar os referidos operadores em constantes.");

}
