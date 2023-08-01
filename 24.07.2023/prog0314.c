#include <stdio.h>

void main()
{
    float salario, imposto = 0.0;
    char sexo;

    printf("Introduza o Salario: ");
    scanf("%f",&salario);
    printf("Qual o sexo: ");
    scanf("%c",&sexo);
    switch (sexo)
    {
    case 'f':
    case 'F': imposto =imposto + 0.05;
    break;

    case 'm':
    case 'M': imposto = imposto + 0.10;
    break;

    }
    printf("Imposto %.2f\n",salario*imposto);
}
