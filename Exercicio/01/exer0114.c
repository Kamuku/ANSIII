#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Indique se s�o vedadeiras ou falsas:\n");
    puts("Os comentarios");
    printf("a) S� podem ocupar uma linha. (F)\n");
    printf("b) Podem ocupar v�rias linhas.(V)\n");
    printf("c) Podem conter outros comentarios dentro. (F)\n");
    printf("d) Come�am com /* e terminam com */. (V)\n");
    printf("e) N�o t�m qualquer influ�ncia na velocidade de execu��o do programa. (V)\n");
    printf("f) Tem que come�ar no in�cio de uma linha. (F)\n");
    printf("g) Quando ocupam apenas uma linha n�o precisam terminar em */.\n");



}
