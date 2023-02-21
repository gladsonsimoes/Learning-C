#include <stdio.h>
#include <stdlib.h>

void main()
{
    //String que ignora espaço \/

    // char nome[200];

    // printf("Digite seu nome: ");
    // scanf("%s" , nome); //o ruim é que depois do espaço ele ignora os caracteres

    // printf("Seu Nome: %s \n" , nome); //ele não printa o as letras depois do espaço pois ele ignora


    //String que não ignora o espaço: \/

    char nomeCompleto[100];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, 100 , stdin); //o numero 100 é o limitador de caractere
    
    printf("Seu Nome: %s\n" , nomeCompleto);

    system("pause");
}
