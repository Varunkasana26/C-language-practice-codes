#include <stdio.h>
int main()
{
    int x, y;
    printf("enter number of rows:");
    scanf("%d", &x);
    printf("enter number of column:");
    scanf("%d", &y);
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("enter number %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("transpose\n");
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    //storing transpose in another matrix
    int arr1[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            arr1[i][j] = arr[j][i];
        }
        printf("\n");
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}