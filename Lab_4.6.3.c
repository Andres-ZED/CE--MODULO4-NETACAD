#include <stdio.h>

int main(void) {
    
    double src[10] = { 3.5, 5.8, 1.3, 8.8, 4.2, 7.2, 3.4, 6.5, 2.3, 8.2 };
    double dest[10];

    double *ps = src;
    double *pd = dest;
    size_t n = sizeof src / sizeof src[0];

    for (size_t i = 0; i < n; ++i) {
        pd[i] = ps[i] + 1.0;
    }

    for (size_t i = 0; i < n; ++i) {
        printf("%.1f\n", dest[i]);
    }

    return 0;
}
