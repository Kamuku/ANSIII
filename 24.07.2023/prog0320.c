#include <stdio.h>

void main()
{
    int n_horas;
    long res;
    char tipo;
    printf("Numero de hora: ");
    printf("O que mostrar (m/s/d): ");
    scanf("%c", &tipo);
    res = n_horas;

    switch(tipo)
    {
    case 'd':
    case 'D': res = res * 10;

    case 's':
    case 'S': res = res * 60;

    case 'm':
    case 'M': res = res * 600;
    }
    printf("%dh --> %ld%c",n_horas,res,tipo);
}
