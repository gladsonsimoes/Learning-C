#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int evento = 5;
    char corrida = 'd';
    float tempo = 27.25;
    printf("O tempo vitorioso na eliminatória %c", corrida);
    printf("\nda competicao %d foi %f.", evento, tempo);

    system("pause"); // pausar o console (somente para windows)
    return 1;
}