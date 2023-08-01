#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Indique se são vedadeiras ou falsas:\n");
    puts("Os comentarios");
    printf("a) Só podem ocupar uma linha. (F)\n");
    printf("b) Podem ocupar várias linhas.(V)\n");
    printf("c) Podem conter outros comentarios dentro. (F)\n");
    printf("d) Começam com /* e terminam com */. (V)\n");
    printf("e) Não têm qualquer influência na velocidade de execução do programa. (V)\n");
    printf("f) Tem que começar no início de uma linha. (F)\n");
    printf("g) Quando ocupam apenas uma linha não precisam terminar em */.\n");



}
