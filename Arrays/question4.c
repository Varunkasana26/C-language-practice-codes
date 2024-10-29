#include <stdio.h>
int main()
{
    int arr[5] = {-3, -5, -16, -7, -1};
    int max = arr[0];//here we can also save max=-1
    for (int i = 1; i <= 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}