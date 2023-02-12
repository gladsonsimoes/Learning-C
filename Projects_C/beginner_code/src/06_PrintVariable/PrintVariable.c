#include <stdio.h>
#include <stdlib.h>

void main()
{
    // variaveis sem declaracao de valor junto!
    char character = 'c';
    int integer = 1;
    float floatRealNumber = 12345.6;
    double doubleRealNumber = 11.6;

    //%c para char
    printf("\n Caractere : %c" , character);

    //%d para int
    printf("\n Valor Inteiro : %d" , integer);

    //%f para float
    printf("\n Valor Float : %f" , floatRealNumber);

    //%if para double
    printf("\n Valor Double : %i" , doubleRealNumber);

    printf("\n");
    
    system("pause"); // pausar o console (somente para windows)
}