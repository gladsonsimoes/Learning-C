#include <stdio.h>
#include <stdlib.h>

void main()
{
    // variaveis sem declaracao de valor junto!
    char character = 'c';
    int integer = 12;
    float floatRealNumber = 12345.6f;
    double doubleRealNumber = 12.67;
    //%c para char
    printf("\n Caractere : %c" , character);

    //%d para int
    printf("\n Valor Inteiro : %d" , integer);

    //%f para float
    printf("\n Valor Float : %f" , floatRealNumber);

    //%Lf para double
    printf("\n Valor Double : %Lf" , doubleRealNumber);

    printf("\n");
    
    system("pause"); // pausar o console (somente para windows)
}