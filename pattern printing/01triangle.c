#include <stdio.h>
int main()
{
    int n;
    int a = 1;
    printf("enter row number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int x=i+j;
            if(x%2==0)printf("%d",a);
            else printf("%d",a-1);
        }
        
        printf("\n");
    }
    return 0;
}