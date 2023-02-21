#include <stdio.h>
#include <stdlib.h>
#define constante5 5 //define é um tipo de constante para conversar diretamente com pré-processador


void main()
{
    printf( "Constante Define: %i \n", constante5 );

    const int constante = 10;
    printf("Constante Const: %i \n" , constante);

    system("pause");
}