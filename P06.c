#include <stdio.h>

void myStrncpy(char destination[], const char source[], int n);

int main()
{
    char source[1001];
    char destination[1001];

    fgets(source, sizeof(source), stdin);

    int len = 0;
    while(source[len] != '\0')
    {
        len++;
    }
    if(len > 0 && source[len - 1] == '\n')
    {
        source[len - 1] = '\0';
    }
    
    int n = 0;
    scanf("%d", &n);

    myStrncpy(destination, source, n);
    
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", (unsigned char) destination[i]);
    }
    printf("\n");
    return 0;
}

void myStrncpy(char destination[], const char source[], int n)
{
    int i = 0;
    while (i < n && source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    while (i < n)
    {
        destination[i] = '\0';
    }
}