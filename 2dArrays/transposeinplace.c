#include <stdio.h>
int main()
{
    int n;
    printf("enter number of rows/column:");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter number %d %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //swap arr[i][j]and arr[j][i]
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
        }
     }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}