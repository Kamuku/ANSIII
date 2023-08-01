#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Embora os programas que se seguem não tenham erros de compilação, identifique as causas de possível mau funcionamento.\n");
    printf("O usuario não receberia as instruções pois a tela não iria passar nenuma. além disso, o scanf tem carateres que atrapalhariam o seu bom funcionamento. Ele é uma função de leitura de dados por isso deve conter apenas instruções de leitura.\n");
}
