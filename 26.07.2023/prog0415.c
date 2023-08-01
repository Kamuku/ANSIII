#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
int i;

for(i=0; i<255; i++)
    printf("%3d --> %c\n", i, (char)i);
}
