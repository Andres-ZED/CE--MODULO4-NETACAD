
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[256];
    if (scanf("%255s", word) != 1)
        return 0;

    size_t length = strlen(word);
    for (size_t i = 0; i < length / 2; ++i)
    {
        char c = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = c;
    }

    printf("%s\n", word);
    return 0;
}
