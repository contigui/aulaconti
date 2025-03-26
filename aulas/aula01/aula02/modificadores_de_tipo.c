#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // unsigned char -> 0 a 255

       //unsigned tira o valor negativo no char e no int apenas

    // unsigned int  -> 0 a 4bi
    // short int     -> -32k a 32k
    // unsigned short int -> 0 a 65k
    // long int      -> -nonilhao a nonilhão
    // unsigned long int -> 0 a vigintilhão 10 a 120
    
    // long double -> quase 0 a um número muito grande

    printf ("O tipo 'short int' ocupa %i byte(s)\n", sizeof(short int));
    printf ("O tipo 'long int' ocupa %i byte(s)\n", sizeof (long int));
    printf ("O tipo 'long double' ocupa %i byte(s)\n", sizeof (long double));
    // 
    printf ("O tipo 'unsigned char' vai de 0 a %i\n", UCHAR_MAX);
    printf ("O tipo 'unsigned int' vai de 0 a %i\n", UINT_MAX);
    printf ("O tipo 'short int' vai de %i a %i\n", SHRT_MIN, SHRT_MAX);
    printf ("O tipo 'unsigned short int' vai de 0 a %i\n", USHRT_MAX);
    printf ("O tipo 'long int' vai de %i a %i\n", LONG_MIN, LONG_MAX);
    printf ("O tipo 'unsigned long int' vai de 0 a %i\n", ULONG_MAX);
    printf ("O tipo 'long double' vai de %.4E a %.4E\n", LDBL_MIN, LDBL_MAX);

    return 0;
}