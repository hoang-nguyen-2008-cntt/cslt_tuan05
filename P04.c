#include <stdio.h>

int main()
{
    int m, n;
    double a[100][100];
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    double max = a[0][0];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("%.2lf\n", max);
    return 0;
}