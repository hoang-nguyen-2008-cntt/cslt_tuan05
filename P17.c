#include <stdio.h>

int isSymmetric(double a[][100], int n);

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    double a[100][100];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    if(m != n)
    {
        printf("NO");
        return 0;
    }

    if(isSymmetric(a, n))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}

int isSymmetric(double a[][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
}

/*em có sử dụng AI hỗ trợ giải thích thuật toán logic và sửa code trong hàm isSymmetric của bài này*/
/*tên AI: Microsoft Copilot*/
/*model: GPT-5.6 Sol */