#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nomeCompleto[100];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, 100 , stdin); //o numero 100 é o limitador de caractere
    
    printf("Seu Nome: %s\n" , nomeCompleto);

    system("pause");
}
