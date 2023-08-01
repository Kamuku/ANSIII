#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Indique quais das seguintes afirmações são verdadedeira e quais são falsas.\n");
    printf("a) O tipo float reserva espaço em memória para um real com precisão simples, enquanto o tipo double reserva espaço para uma variável de predisão dúpla. (V)\n");
    printf("b) O tipo char pode ter os prefixos long e short. (F)\n");
    printf("c) O tipo chaar pode ter os prefixos signed e unsigned. (F)\n");
    printf("d) Uma variável declarada como unsined pode comportar valores superiores a uma outra que seja declarada signed. (F)\n");
    printf("e) Umavariável do tipo char pode armazenar caracters individuais ou conjuntos de caracteres também denominados de strings (V)\n");
    printf("g) Uma variável do tipo char pode armazenar vários caracteres, desde que sejam caracteres especiais. (F)\n");
    printf("h) O operador módulo (%%) não pode ser utilizado em reiais. (F)\n");

}
