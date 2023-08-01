#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Dentro de uma string pode se usar letras maiúsculas? Justifique.");
    puts("Sim. Dentro de uma string pode se usar letras maiúsculas pois a string admite todos os 255 carateres do códio ASC.");
}
