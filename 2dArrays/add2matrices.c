#include <stdio.h>
int main()
{
    int arr[2][2], arr1[2][2], res[2][2];
    printf("matrice 1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("matrice 2\n");
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            scanf("%d", &arr1[x][y]);
        }
        printf("\n");
    }
        printf("result matrice:\n");
        for (int a = 0; a < 2; a++)
        {
            for (int b = 0; b < 2; b++)
            {
                res[a][b] = arr[a][b] + arr1[a][b];
                printf("%d", res[a][b]);
            }
            printf("\n");
        }
        return 0;
    }

