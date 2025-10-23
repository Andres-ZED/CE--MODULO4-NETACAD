#include <stdio.h>

int main(void) {
    int i;

    printf("Introduce un número: ");
    if (scanf("%d", &i) != 1) {
        return 1;
    }

    if (i == 1) {
        puts("Only one?");
    } else if (i == 2) {
        puts("I want more.");
    } else if (i == 3) {
        puts("Not bad.");
    } else {
        puts("Okay.");
    }

    return 0;
}
