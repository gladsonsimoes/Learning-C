#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[200];

    printf("Digite seu nome: ");
    scanf("%s" , nome); //o ruim é que depois do espaço ele ignora os caracteres

    printf("Seu Nome: %s \n" , nome); //ele não printa o as letras depois do espaço pois ele ignora


     system("pause");
}