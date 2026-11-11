#include <stdio.h>

void NoiChuoi(char a[], const char b[]);

int main() 
{
    char chuoiA[1001];
    char chuoiB[1001];

    fgets(chuoiA, sizeof(chuoiA), stdin);
    fgets(chuoiB, sizeof(chuoiB), stdin);

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
    if (len > 0 && chuoiB[len -1] == '\n')
    {
        chuoiB[len - 1] = '\0';
    }

    NoiChuoi (chuoiA, chuoiB);
    printf("%s", chuoiA);
    return 0;
}

void NoiChuoi(char a[], const char b[])
{
    int lenA = 0;
    while (a[lenA] != '\0')
    {
        lenA++;
    }
    
    int i = 0;
    while (b[i] != '\0')
    {
        a[lenA + i] = b[i];
        i++;
    }
    a[lenA + i] = '\0';
}