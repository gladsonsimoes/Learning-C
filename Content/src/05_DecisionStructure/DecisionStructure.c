#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A, B;

    A = 10;
    B = 5;

    if(A != B){
        printf("\n Numeros sao Diferentes! \n");
    } else {
        printf("\n Numeros sao Iguais \n");
    }

    if(A > B){
        printf("\n A maior que B \n");
    } else {
        printf("\n B maior que A \n");
    }

    if(A <= B){
        printf("\n A menor ou igual que B\n");
    } else {
        printf("\n A maior do que o valor B \n");
    }


    system("pause");
}