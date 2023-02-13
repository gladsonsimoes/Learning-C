#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A = 5;
    int i;
    int vet[5] = { 1 , 2 , 3 , 4 , 5 };

    for(i = 0 ; i < A ; i++){
        printf("\n Digite o %d valor inteiro \n" , &vet[i]);
        scanf("%d" , &vet[i]);
    }

    system("pause");
}