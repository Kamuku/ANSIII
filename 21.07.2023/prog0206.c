#include <stdio.h>

void main()
{
    short int idade;
    int montante;
    long int n_conta;

    printf("Qual a idade: ");scanf("%hd",&idade);
    printf("Montante a depositar: "); scanf("%d",&montante);
    printf("Numero da conta a movimentar: ");scanf("%ld",&n_conta);

    printf("\nUma pessoa de %hd anos depositou %d kwanzas na conta %ld\n",idade,montante,n_conta);

}
