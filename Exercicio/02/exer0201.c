#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Indique qual das seguintes declarações estão corretas:");
    printf("As declarações corretas são:\ne)float f,g,c;\ng)char ch1='A'=ch2='A';\ng)char ch1='A',ch2='A';");

}
