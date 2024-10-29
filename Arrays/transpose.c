#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    int arr[r][c]; // r*c total elements
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix\n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            printf("data is %d\n",arr[i][j]);
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
