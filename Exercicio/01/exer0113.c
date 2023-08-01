#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Um programa em C que tenha comentarios no seu código é em relação a outro que não tenha:\n");
    printf("Executado à mesma velocidade, pois os comentários são ignoados pelo compilador.\n");

}
