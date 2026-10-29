#include <stdio.h>

int main()
{
    char str[1001];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("%d\n", len - 1);
    return 0;
}