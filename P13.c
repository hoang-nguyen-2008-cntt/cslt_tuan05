#include <stdio.h>

int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);

    double a[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        double sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}