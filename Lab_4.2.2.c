#include <stdio.h>

int main() {
    float numbers[10] = {5.6, 6.2, 6.4, 7.3, 4.3, 8.3, 9.2, 2.3, 1.9, 0.1};
    float temp;
    int i, j;

  
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }

       
        for (int k = 0; k < 10; k++) {
            printf("%.2f ", numbers[k]);
        }
        printf("\n");
    }

    return 0;
}
