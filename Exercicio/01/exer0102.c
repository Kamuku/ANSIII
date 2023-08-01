#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Como devem terminar todas as instruções em C?");
    puts("Em C, todas as funções têm de terminar com ponto e virgula ou com parenteses curvos.");
}
