#include <stdio.h>

void main()
{
    char opcao;

    do
    {
        printf("\tM E N U   P R I N C I P A L\n");
        printf("\n\n\tClintes");
        printf("\n\n\tFornecedores");
        printf("\n\n\tEncomendas");
        printf("\n\n\tSair");
        fflush(stdin);
        printf("\n\n\tOpcao: ");
        scanf("%c",&opcao);

        switch (opcao)
        {
        case 'c':
        case 'C':puts("opcao CLIENTES");break;
        case 'f':
        case 'F':puts("opcao FORNECEDORES");break;
        case 'e':
        case 'E':puts("opcao ENCOMENDAS");break;
        case 's':
        case 'S': break;
        default: puts("Opcao invalida!!!");
        }
        getchar();

    }
    while(opcao !='s' && opcao !='S');
}
