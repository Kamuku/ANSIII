#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Um programa em C que tenha comentarios no seu c�digo � em rela��o a outro que n�o tenha:\n");
    printf("Executado � mesma velocidade, pois os coment�rios s�o ignoados pelo compilador.\n");

}
