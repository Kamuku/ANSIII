#include <stdio.h>

void main()
{
    int n_horas;
    long n_segundos;
    printf("Numero de horas: ");scanf("%d",&n_horas);
    n_segundos=n_horas<0?0:n_horas *3600L;
    printf("%d horas tem %ld segundos\n",n_horas,n_segundos);
}
