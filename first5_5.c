#include <stdio.h>

int main  () {
    int numeroSinal = 3000000000; //Este valor  excede o limite de int normal,e resultara em num negativo errado, int nao utrapassa 2.6b neg ou posit
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);


    return 0;

}