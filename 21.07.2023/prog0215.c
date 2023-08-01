#include <stdio.h>

void main()
{
    int num = 1000;
    printf("Introduza um caratere: ");
    scanf("%c",&num);
    printf("O valor de num = %d cujo carater = '%c'\n",num, (char) num);

}
