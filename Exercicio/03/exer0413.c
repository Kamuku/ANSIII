#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese");
    puts("Qual a diferença (se existir) entre as duas seguintes instruções?");
    puts("A diferença  entre as duas instruções é a seguinte. Quando o incremento é feito antes da variave, primeiro o valor da variavel é incrementado só depois a variável é atribuida. A icrementação a direita é o inverso!");

}
