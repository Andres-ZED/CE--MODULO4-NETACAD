#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char IPAddress[64];
    if (scanf("%63s", IPAddress) != 1)
        return 0;

    char *parts[4];
    char *saveptr = NULL;
    char *token = strtok_r(IPAddress, ".", &saveptr);
    int count = 0;

    while (token != NULL && count < 4) {
        size_t len = strlen(token);
        if (len == 0 || len > 3) {
            puts("Error: not a valid address.");
            return 0;
        }
        for (size_t i = 0; i < len; ++i) {
            if (!isdigit((unsigned char)token[i])) {
                puts("Error: not a valid address.");
                return 0;
            }
        }
        int val = atoi(token);
        if (val < 0 || val > 255) {
            puts("Error: not a valid address.");
            return 0;
        }
        parts[count++] = token;
        token = strtok_r(NULL, ".", &saveptr);
    }

    if (count != 4 || token != NULL) {
        puts("Error: not a valid address.");
        return 0;
    }

    char last3[64], last2[64], last1[64];
    snprintf(last3, sizeof last3, "%s.%s.%s", parts[1], parts[2], parts[3]);
    snprintf(last2, sizeof last2, "%s.%s", parts[2], parts[3]);
    snprintf(last1, sizeof last1, "%s", parts[3]);

    printf("Last 3 parts: %s\n", last3);
    printf("Last 2 parts: %s\n", last2);
    printf("Last 1 part: %s\n", last1);

    return 0;
}