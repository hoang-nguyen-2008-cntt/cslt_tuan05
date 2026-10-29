#include <stdio.h>

int main()
{
    char a[1001];
    char b[1001];

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int i = 0;
    while ((a[i] != '\0') && (b[i] != '\0'))
    {
        if (a[i] < b[i])
        {
            printf("-1\n");
            return 0;
        }
        else if (a[i] > b[i])
        {
            printf("1\n");
            return 0;
        }
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
    {
        printf("0\n");
    }
    else if (a[i] == '\0')
    {
        printf("-1\n");
    }
    else 
    {
        printf("1\n");
    }
    return 0;
}