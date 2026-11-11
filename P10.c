#include <stdio.h>

int TimKyTuDauTien (const char a[], int n);

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

    printf("%d\n", TimKyTuDauTien(str, c));

    return 0;
}

int TimKyTuDauTien (const char a[], int n)
{
    int i = 0;
    while(1)
    {
        if ((unsigned char) a[i] == n)
        {
            return i;
        }
        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }
    return -1;
}