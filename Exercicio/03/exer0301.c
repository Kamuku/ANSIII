#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    puts("Indique quais afirmações são verdadeiras e quais são falsa.\n");
    puts("1.1  A condição dentro de um laço while e do...while tem que ser colocada sempre dentro de parentes. (V)");
    puts("1.2  Os laços while e for executam SEMPRE, pelo menos uma vez, o corpo do laço. (F)");
    puts("1.3  o laço do...while executa SEMPRE pelo menos uma vez. (V)");
    puts("1.4  As três componentes, dentro de parêntes, do laço for são todas obrigatórias (V)");
    puts("1.5  As três componentes, dentro de parênteses, do laço for facultativas  (F)");
    puts("1.6  Quando em um laço for se tem que realizar mais do que uma carga inicial ou mais do que um incremento,\n    as diversas instruções, em cada uma das componentes,devem ser separados por virgula\n    e não ponto e virgula, na forma de manter o  laço for. (V)");
    puts("1.7  A instrução de um laço é sempre executada. (F)");
    puts("1.8  No laço for, o número de vezes que as cargas iniciais são executadas é sempre igual ao número de interações do laço. (F)");
    puts("1.9  No laço for ou while, o número de vezes que a condição é testada é sempre igualao número de interações do laço. (V)");
    puts("1.10 No laço for, o número de vezes que a instrução é executada é sempre igual ao número de vezes que é executada a instrução. (F)");
    puts("1.11 Um laço, quando está dentro de outro laço, necessita de chave. (V)");
    puts("1.12 Não há limite para o número de laços dentro de outros laços. (V)");
    puts("1.13 No laço do...while, a instrução é sempre testado pelo menos uma vez. (V)");
    puts("1.14 Em todos os laços, a condição é sempre executada pelo menos uma vez. (F)");
    puts("1.15 Os laços while e do ...while incrementam automaticamente a variavel de controle. (F)");
    puts("1.16 O laço do...while aparece escrito scrito menos frequentemente do que todos os outros. (V)");
    puts("Os laços são executados até que a condição escrita se verifique. (V)");
    puts("1.18 Um break, quando presente dentro de um laço, termina o programa. (F)");
    puts("1.19 No laço while, antes de se executar a instrução continue, deve se atualizar a variavel de controle do laço (F)");
    puts("1.20 Qualquer dos laços pode ser sempre escrito a partir do laço while (V)");
}
