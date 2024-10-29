#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("%d",j);
            printf("\n");
            int a=1;
            if(i==n)
            break;
        for(int x=0;x<=i;x++){
             printf("%c",a+64);
                a++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}