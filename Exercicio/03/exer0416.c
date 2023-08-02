#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("Qual é a diferênça entre a=-2 e a -= 2?");
    puts("No primerio caso, o a está a receber o valor de -2. Já no segundo, a está a receber o valor atual de a -2.");

}
