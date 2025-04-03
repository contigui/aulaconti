#include <stdio.h>

int main(){
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%i", &numero);
    getchar();
    printf("O numero informado: %i\n", numero);

    float nota;
    printf("Informe sua nota entre 0.0 a 10.0: ");
    scanf("%f", &nota);
    printf("A sua nota foi: %.1f\n", nota);

    return 0;
}
