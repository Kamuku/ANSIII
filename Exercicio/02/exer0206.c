#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Indique quais das seguintes afirma��es s�o verdadedeira e quais s�o falsas.\n");
    printf("a) O tipo float reserva espa�o em mem�ria para um real com precis�o simples, enquanto o tipo double reserva espa�o para uma vari�vel de predis�o d�pla. (V)\n");
    printf("b) O tipo char pode ter os prefixos long e short. (F)\n");
    printf("c) O tipo chaar pode ter os prefixos signed e unsigned. (F)\n");
    printf("d) Uma vari�vel declarada como unsined pode comportar valores superiores a uma outra que seja declarada signed. (F)\n");
    printf("e) Umavari�vel do tipo char pode armazenar caracters individuais ou conjuntos de caracteres tamb�m denominados de strings (V)\n");
    printf("g) Uma vari�vel do tipo char pode armazenar v�rios caracteres, desde que sejam caracteres especiais. (F)\n");
    printf("h) O operador m�dulo (%%) n�o pode ser utilizado em reiais. (F)\n");

}
