#include <stdio.h>

void main()
{
    float salario, taxa;
    printf("Qual o salario\n");
    scanf("%f",&salario);

    if(salario < 1000)
        taxa = .05;
    else
        if(salario<5000)
        taxa = .11;

        else
            taxa = .35;
            printf("Salario: %.2f \nImposto: %.2f \nLiquido: %.2f\n",salario,salario*taxa,salario*(1.0-taxa));
}
