#include <stdio.h>

void multiplyMatrix(double a[][100],
                    double b[][100],
                    double c[][100],
                    int m,
                    int n,
                    int p);

int main()
{
    int m = 0;
    int n = 0;
    int p = 0;

    scanf("%d%d%d", &m, &n, &p);

    double a[100][100];
    double b[100][100];
    double c[100][100];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            scanf("%lf", &b[i][j]);
        }
    }

    multiplyMatrix(a, b, c, m, n, p);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            printf("%.2lf", c[i][j]);

            if(j < p - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

void multiplyMatrix(double a[][100],
                    double b[][100],
                    double c[][100],
                    int m,
                    int n,
                    int p)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            c[i][j] = 0;

            for(int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

/*em có sử dụng AI hỗ trợ giải thích thuật toán logic và sửa code trong hàm multiplyMatrix của bài này*/
/*tên AI: Microsoft Copilot*/
/*model: GPT-5.6 Sol */