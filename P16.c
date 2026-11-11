#include <stdio.h>

void spiralSort(double a[][100], int m, int n);

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

    spiralSort(a, m, n);

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

void spiralSort(double a[][100], int m, int n)
{
    double arr[10000];
    int k = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[k++] = a[i][j];
        }
    }

    for(int i = 0; i < k - 1; i++)
    {
        int minPos = i;

        for(int j = i + 1; j < k; j++)
        {
            if(arr[j] < arr[minPos])
            {
                minPos = j;
            }
        }

        double temp = arr[i];
        arr[i] = arr[minPos];
        arr[minPos] = temp;
    }

    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    int idx = 0;

    while(top <= bottom && left <= right)
    {
        for(int j = left; j <= right; j++)
        {
            a[top][j] = arr[idx++];
        }
        top++;

        for(int i = top; i <= bottom; i++)
        {
            a[i][right] = arr[idx++];
        }
        right--;

        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
            {
                a[bottom][j] = arr[idx++];
            }
            bottom--;
        }

        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                a[i][left] = arr[idx++];
            }
            left++;
        }
    }
}

/*em có sử dụng AI hỗ trợ giải thích thuật toán logic và sửa code trong hàm spiralSort của bài này*/
/*tên AI: Microsoft Copilot*/
/*model: GPT-5.6 Sol */