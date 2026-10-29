#include <stdio.h>

int main()
{
    char nguon[1001];
    char saochep[1001];

    fgets(nguon, sizeof(nguon), stdin);
    int i = 0;
    while(nguon[i] != '\0')
    {
        saochep[i] = nguon[i];
        i++;
    }
    saochep[i] = '\0';
    printf("%s\n", saochep);
    return 0;
}