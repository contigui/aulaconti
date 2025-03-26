#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // char   -> 'A', '\n', 100 (tabela ASCII) -> 1 byte memoria
    // int    -> -123, 0, 123... -> 4 bytes memoria
    // float  -> -100.123456f, 0.0f 100.123456f (f no final = float, sem nada é double) -> 4 bytes
    // double -> -1.12345678901234 0.0 2.123456789012345 -> 8 bytes
    // void   -> sem tipo

    printf ("O tipo 'char' ocupa %i byte(s)\n", sizeof(char));
    printf ("O tipo 'int' ocupa %i byte(s)\n", sizeof(float));
    printf ("O tipo 'float' ocupa %i byte(s)\n", sizeof(float));
    printf ("O tipo 'double' ocupa %i byte(s)\n", sizeof(double));
    printf ("O tipo 'void' ocupa %i byte(s)\n", sizeof(void));
    
    printf ("O tipo 'char' aceita valor de %i a %i\n", CHAR_MIN, CHAR_MAX);
    printf ("O tipo 'int' aceita valor de %i a %i\n", INT_MIN, INT_MAX);
    printf ("O tipo 'float' aceita o valor de %.2E a %.2E\n", FLT_MIN, FLT_MAX);
    printf ("O tipo 'double' aceita valor de %.2E a %.2E\n", DBL_MIN, DBL_MAX);


    return 0;
}