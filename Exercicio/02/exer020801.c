#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Embora os programas que se seguem n�o tenham erros de compila��o, identifique as causas de poss�vel mau funcionamento.\n");
    printf("O usuario n�o receberia as instru��es pois a tela n�o iria passar nenuma. al�m disso, o scanf tem carateres que atrapalhariam o seu bom funcionamento. Ele � uma fun��o de leitura de dados por isso deve conter apenas instru��es de leitura.\n");
}
