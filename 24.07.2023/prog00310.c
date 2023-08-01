#include <stdio.h>

void main()
{
    float salario;

    printf("Qual o salrio: ");scanf("%f",&salario);
    salario = salario>1000?salario*1.05:salario*1.07;
    printf("Novo Salario: %.2f\n",salario);
}
