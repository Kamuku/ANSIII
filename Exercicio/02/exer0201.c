#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    puts("Indique qual das seguintes declara��es est�o corretas:");
    printf("As declara��es corretas s�o:\ne)float f,g,c;\ng)char ch1='A'=ch2='A';\ng)char ch1='A',ch2='A';");

}
