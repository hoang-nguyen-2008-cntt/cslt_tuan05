#include <stdio.h>

int SoSanhGioiHanSoKyTu (const char s1[], const char s2[], int n);

int main()
{
    char chuoiA[1001];
    char chuoiB[1001];
    
    fgets (chuoiA, sizeof(chuoiA), stdin);
    fgets (chuoiB, sizeof(chuoiB), stdin);

    int len = 0;
    while (chuoiA[len] != '\0')
    {
        len++;
    }
    if (len > 0 && chuoiA[len - 1] == '\n')
    {
        chuoiA[len - 1] = '\0';
    }

    len = 0;
    while (chuoiB[len] != '\0')
    {
        len++;
    }
    if (len > 0 && chuoiB[len - 1] == '\n')
    {
        chuoiB[len - 1] = '\0';
    }

    int n = 0;
    scanf("%d", &n);

    printf("%d\n", SoSanhGioiHanSoKyTu(chuoiA, chuoiB, n));

    return 0;
}

int SoSanhGioiHanSoKyTu (const char s1[], const char s2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s1[i] < s2[i])
        {
            return -1;
        }
        if (s1[i] > s2[1])
        {
            return 1;
        }
        if (s1[i] == '\0')
        {
            return 0;
        }
    }
    return 0;
}