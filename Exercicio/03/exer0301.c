#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    puts("Indique quais afirma��es s�o verdadeiras e quais s�o falsa.\n");
    puts("1.1  A condi��o dentro de um la�o while e do...while tem que ser colocada sempre dentro de parentes. (V)");
    puts("1.2  Os la�os while e for executam SEMPRE, pelo menos uma vez, o corpo do la�o. (F)");
    puts("1.3  o la�o do...while executa SEMPRE pelo menos uma vez. (V)");
    puts("1.4  As tr�s componentes, dentro de par�ntes, do la�o for s�o todas obrigat�rias (V)");
    puts("1.5  As tr�s componentes, dentro de par�nteses, do la�o for facultativas  (F)");
    puts("1.6  Quando em um la�o for se tem que realizar mais do que uma carga inicial ou mais do que um incremento,\n    as diversas instru��es, em cada uma das componentes,devem ser separados por virgula\n    e n�o ponto e virgula, na forma de manter o  la�o for. (V)");
    puts("1.7  A instru��o de um la�o � sempre executada. (F)");
    puts("1.8  No la�o for, o n�mero de vezes que as cargas iniciais s�o executadas � sempre igual ao n�mero de intera��es do la�o. (F)");
    puts("1.9  No la�o for ou while, o n�mero de vezes que a condi��o � testada � sempre igualao n�mero de intera��es do la�o. (V)");
    puts("1.10 No la�o for, o n�mero de vezes que a instru��o � executada � sempre igual ao n�mero de vezes que � executada a instru��o. (F)");
    puts("1.11 Um la�o, quando est� dentro de outro la�o, necessita de chave. (V)");
    puts("1.12 N�o h� limite para o n�mero de la�os dentro de outros la�os. (V)");
    puts("1.13 No la�o do...while, a instru��o � sempre testado pelo menos uma vez. (V)");
    puts("1.14 Em todos os la�os, a condi��o � sempre executada pelo menos uma vez. (F)");
    puts("1.15 Os la�os while e do ...while incrementam automaticamente a variavel de controle. (F)");
    puts("1.16 O la�o do...while aparece escrito scrito menos frequentemente do que todos os outros. (V)");
    puts("Os la�os s�o executados at� que a condi��o escrita se verifique. (V)");
    puts("1.18 Um break, quando presente dentro de um la�o, termina o programa. (F)");
    puts("1.19 No la�o while, antes de se executar a instru��o continue, deve se atualizar a variavel de controle do la�o (F)");
    puts("1.20 Qualquer dos la�os pode ser sempre escrito a partir do la�o while (V)");
}
