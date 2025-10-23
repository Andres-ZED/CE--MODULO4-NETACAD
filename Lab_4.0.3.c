// ...existing code...
#include <stdio.h>

int main(void) {
    int m;
    int days;

    printf("Introduce el número del mes: ");
    fflush(stdout);
    if (scanf("%d", &m) != 1) {
        return 1;
    }

    switch (m) {
        case 1:  days = 31; break;
        case 2:  days = 29; break; 
        case 3:  days = 31; break;
        case 4:  days = 30; break;
        case 5:  days = 31; break;
        case 6:  days = 30; break;
        case 7:  days = 31; break;
        case 8:  days = 31; break;
        case 9:  days = 30; break;
        case 10: days = 31; break;
        case 11: days = 30; break;
        case 12: days = 31; break;
        default:
            puts("Error: no such month in my calendar..");
            return 0;
    }

    printf("%d\n", days);
    return 0;
}