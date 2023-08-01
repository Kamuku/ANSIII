/*****************************************************************
* Programa que solicita a data e escreve-a no formato dd/mm/aaaa *
******************************************************************/
#include <stdio.h>

void main()
{
    int dia, mes,ano;
    puts("Prenche as informacoes utilizando apenas numeros inteiros");
    printf("Introduza o dia:");
    scanf("%d",&dia);
    printf("Introduza o mes:");
    scanf("%d",&mes);
     printf("Introduza o ano:");
    scanf("%d",&ano);
    printf("Voce introduziu a seguinte data %d/%d/%d",dia,mes,ano);

}
