#include <stdio.h>

int main(){

    printf("==============================\n");
    printf("     N O T A    L E G A L     \n");
    printf("==============================\n");
    printf("Produto     Qtd     Valor Unit\n");
    printf("%s %6.03i %9.2f\n", "Camiseta", 2, 39.99);
    printf("%s %9.03i %9.2f\n", "Calca", 1, 89.90);  
    printf("%s %3.03i %9.2f\n", "Meia Social", 3, 19.99);
    printf("==============================\n");
    printf("%s %19.2f",   "Total:",    229.85);
    return 0;
}