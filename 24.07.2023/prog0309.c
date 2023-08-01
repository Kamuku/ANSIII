#include <stdio.h>

void main()
{
    float salario;
    char est_civil;

    printf("Qual o salario: "); scanf("%f",&salario);
    puts("Qual e o Estado Civil:");
    est_civil=getchar();

    if (est_civil=='C' || est_civil == 'c')
    printf("Imposto: %.2f\n",salario*0.09);
    else
    if(est_civil=='S' || est_civil=='s')
    printf("Imposto: %.2f\n", salario*0.10);
    else
    printf("Estado Civil incorreto!!!!\n");
}
