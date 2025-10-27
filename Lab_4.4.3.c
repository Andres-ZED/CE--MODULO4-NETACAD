#include <stdio.h>

int main(void)
{
    char IPAddressPart1[4];
    char IPAddressPart2[4];
    char IPAddressPart3[4];
    char IPAddressPart4[4];
    char IPAddress[16];

    if (scanf("%3s", IPAddressPart1) != 1) return 1;
    if (scanf("%3s", IPAddressPart2) != 1) return 1;
    if (scanf("%3s", IPAddressPart3) != 1) return 1;
    if (scanf("%3s", IPAddressPart4) != 1) return 1;

    snprintf(IPAddress, sizeof(IPAddress), "%s.%s.%s.%s",
             IPAddressPart1, IPAddressPart2, IPAddressPart3, IPAddressPart4);

    printf("%s\n", IPAddress);
    return 0;
}
