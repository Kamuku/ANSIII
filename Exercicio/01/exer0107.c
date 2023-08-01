#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("A extenção .h são também conhecidos por... ?");
    puts("A extenção .h são também conhecidos por headers ou cabeçalhos.");
}
