#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A, B, X;

    A = 1;
    B = 3;

    printf("\n Numero do A: %d \n Numero do B: %d \n", A, B);

    // soma
    X = A + B;
    printf("\n O resultado da soma: %d \n", X);

    // subtracao
    X = A - B;
    printf("\n O resultado da subtracao: %d \n", X);

    // multiplicação
    X = A * B;
    printf("\n O resultado da Multiplicacao: %d \n", X);

    // divisao
    X = A / B;
    printf("\n O resultado da divisao inteira: %d \n", X);

    // Resto
    X = A % B;
    printf("\n O resultado do Resto: %d \n", X);

    // decrementar (tira mais um)
    B--;
    printf("\n decrement B value: %d \n", B);
    
    // incrementa (adicionar mais um)
    B++;
    printf("\n increment B value: %d \n", B);

    system("pause");
}