#include <stdio.h>

int TimKyTuCuoiCung (const char a[], int n);

int main()
{
    char str[1001];
    fgets (str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    int c = 0;
    scanf("%d", &c);

    printf("%d\n", TimKyTuCuoiCung(str, c));

    return 0;
}

int TimKyTuCuoiCung (const char a[], int n)
{
    int pos = 0;
    int i = 0;

    while(1)
    {
        if ((unsigned char) a[i] == n)
        {
            pos = i;
        }
        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }
    return pos;
}