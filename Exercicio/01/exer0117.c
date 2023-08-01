#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Total  = 100%%\n");
    printf("IVA    = 17%%\n");
    printf("IRS    = 15%%\n");
    printf("--------------\n");
    printf("Líq    = 68%%\n");
}
