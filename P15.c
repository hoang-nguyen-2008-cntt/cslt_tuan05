#include <stdio.h>

void XoayVienTheoChieuKimDongHo(double a[][100], int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    double a[100][100];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    XoayVienTheoChieuKimDongHo(a, m, n);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%.2lf", a[i][j]);

            if(j < n - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

void XoayVienTheoChieuKimDongHo(double a[][100], int m, int n)
{
    if(m == 1 && n == 1)
    {
        return;
    }

    if(m == 1)
    {
        double last = a[0][n - 1];

        for(int j = n - 1; j > 0; j--)
        {
            a[0][j] = a[0][j - 1];
        }

        a[0][0] = last;
        return;
    }

    if(n == 1)
    {
        double last = a[m - 1][0];

        for(int i = m - 1; i > 0; i--)
        {
            a[i][0] = a[i - 1][0];
        }

        a[0][0] = last;
        return;
    }

    double border[400];
    int k = 0;

    for(int j = 0; j < n; j++)
    {
        border[k++] = a[0][j];
    }

    for(int i = 1; i < m; i++)
    {
        border[k++] = a[i][n - 1];
    }

    for(int j = n - 2; j >= 0; j--)
    {
        border[k++] = a[m - 1][j];
    }

    for(int i = m - 2; i > 0; i--)
    {
        border[k++] = a[i][0];
    }

    double last = border[k - 1];

    for(int i = k - 1; i > 0; i--)
    {
        border[i] = border[i - 1];
    }

    border[0] = last;

    int idx = 0;

    for(int j = 0; j < n; j++)
    {
        a[0][j] = border[idx++];
    }

    for(int i = 1; i < m; i++)
    {
        a[i][n - 1] = border[idx++];
    }

    for(int j = n - 2; j >= 0; j--)
    {
        a[m - 1][j] = border[idx++];
    }

    for(int i = m - 2; i > 0; i--)
    {
        a[i][0] = border[idx++];
    }
}
