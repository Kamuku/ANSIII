#include <stdio.h>

void main()
{
    float salario;

    printf("Salario: ");
    scanf("%f",&salario);

    if(salario<=0)
        printf("Valor invalido\n");
    else
        if (salario > 1000)
            printf("Imposto = %.2f\n", salario*0.10);
        else
            printf("Imposto = %.2f\n", salario*0.05);
}
