#include <stdio.h>
#include <stdlib.h>

void main()
{
    //variáveis principais
    char character; 
    int integer; //-32.767 a 32.767
    float floatRealNumber; //Seis dígitos de precisão
    double doubleRealNumber; //Dez dígitos de precisão

    //variações dos tipos das variaveis (para casos especificos)

    //variações char
    unsigned char characterUnsigned; 
    signed char characterSigned;

    //variações int
    unsigned int integerUnsigned;
    signed int integerSigned;
    short int integerShort;
    unsigned short int integerShortUnsigned;
    signed short int integerShortSigned;
    long int integerLong;
    signed long int integerLongSigned;
    unsigned long int integerLongUnsigned;

    //variações double
    long double doubleLong;


    system("pause"); // pausar o console (somente para windows)
}