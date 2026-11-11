#include <stdio.h>

int TimChuoiCon (const char nguon[], const char chuoicon[]);
void removeNewline (char a[]);

int main()
{
    char ChuoiNguon[1001];
    char ChuoiCon[1001];
    
    fgets (ChuoiNguon, sizeof(ChuoiNguon), stdin);
    fgets (ChuoiCon, sizeof(ChuoiCon), stdin);

    removeNewline (ChuoiNguon);
    removeNewline (ChuoiCon);

    printf("%d\n", TimChuoiCon(ChuoiNguon, ChuoiCon));

    return 0;
}

int TimChuoiCon (const char nguon[], const char chuoicon[])
{
    if (chuoicon[0] == '\0')
    {
        return 0;
    }

    int i = 0;
    while (nguon[i] != '\0')
    {
        int j = 0;
        while (chuoicon[j] != '\0' && nguon[i+j] == chuoicon[j])
        {
            j++;
        }
        if (chuoicon[j] == '\0')
        {
            return i;
        }
        i++;
    }
    return -1;
}

void removeNewline (char a[])
{
    int len = 0;
    while (a[len] != '\0')
    {
        len++;
    }
    if (len > 0 && a[len - 1] == '\n')
    {
        a[len - 1] ='\0';
    }
}