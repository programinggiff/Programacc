#include <stdio.h> 

int main(){
    /*
    Soma(+)
    Subtração(-)
    Multiplicação(*)
    Divisão
    */
    

    int numero1,numero2;
    int soma, subtracao, mutiplicao, divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);


    //operação soma
    soma = numero1 + numero2;
    //operacao subtracao
    subtracao = numero1 - numero2;
    //operacao multilicacao
    mutiplicao = numero1 * numero2;
    //operacao divisao
    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multipição é: %d\n", mutiplicao);
    printf("A Divisão é: %d\n", divisao);

    





    




    return 0;
}
