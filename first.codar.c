#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("**** Programas de Cálculo de Média ***\n");

    printf("digite a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("digite a sua psegunda nota: \n");
    scanf("%f", &nota2);

    printf("digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media =  (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.1f\n", media);


 
    return 0;
}
