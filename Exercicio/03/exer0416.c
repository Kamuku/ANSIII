#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("Qual � a difer�n�a entre a=-2 e a -= 2?");
    puts("No primerio caso, o a est� a receber o valor de -2. J� no segundo, a est� a receber o valor atual de a -2.");

}
