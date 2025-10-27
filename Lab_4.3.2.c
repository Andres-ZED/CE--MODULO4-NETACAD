#include <stdio.h>

int main()
{
    int zeros[10] = { 0 };
    int ones[2] = { 1, 1 };
    int superOnes[4] = { 1, 1, 1, 1 };
    int fibSequence[6] = { 1, 1, 2, 3, 5, 8 };
    int i;

    // Imprimir ceros
    for (i = 0; i < 10; i++) {
        printf("%d ", zeros[i]);
    }
    puts("");

    // Imprimir unos
    for (i = 0; i < 2; i++) {
        printf("%d ", ones[i]);
    }
    puts("");

    // Imprimir superOnes
    for (i = 0; i < 4; i++) {
        printf("%d ", superOnes[i]);
    }
    puts("");

    // Imprimir secuencia Fibonacci
    for (i = 0; i < 6; i++) {
        printf("%d ", fibSequence[i]);
    }
    puts("");

    return 0;
}
