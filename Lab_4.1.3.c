#include <stdio.h>

int main(){ 

    char letter[26];
    int i;

    for(i = 0; i < 26; i++){
        letter[i] = 'a' + i;
    }

    for(i =25; i >=0; i--){
        printf("%c\n", letter[i]);
    }
    printf("%c", letter[6]);
    printf("%c", letter[17]);
    printf("%c", letter[4]);
    printf("%c", letter[0]);
    printf("%c/n", letter[19]);

    return 0;
}