#include <stdio.h>

int TimSoLonNhatTrongHang (double a[][100], int m, int n, int hang, int cot);
int TimSoNhoNhatTrongCot (double a[][100], int m, int n, int hang, int cot);

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

    int TimKiem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (TimSoLonNhatTrongHang(a, m, n, i, j) && TimSoNhoNhatTrongCot(a, m, n, i, j))
            {
                printf("(%d %d) %.2lf\n", i, j, a[i][j]);
                TimKiem = 1;
            }
        }
    }

    if(!TimKiem)
    {
        printf("NOT FOUND");
    }

    return 0;
}

int TimSoLonNhatTrongHang (double a[][100], int m, int n, int hang, int cot)
{
    for (int j = 0; j < n; j++)
    {
        if (a[hang][j] > a[hang][cot])
        {
            return 0;
        }
    }
    return 1;
}

int TimSoNhoNhatTrongCot (double a[][100], int m, int n, int hang, int cot)
{
    for (int i = 0; i < m; i++)
    {
        if (a[i][cot] < a[hang][cot])
        {
            return 0;
        }
    }
    return 1;
}