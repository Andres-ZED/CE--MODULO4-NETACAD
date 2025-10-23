#include <stdio.h>

int main(void) {
    int i;

    printf("Introduce un número: ");
    if (scanf("%d", &i) != 1) {
        return 1;
    }

    switch (i) {
        case 1:
            puts("Only one?");
            break;
        case 2:
            puts("I want more.");
            break;
        case 3:
            puts("Not bad.");
            break;
        default:
            puts("Okay.");
            break;
    }

    return 0;
}
