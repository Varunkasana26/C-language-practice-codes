#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the number rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        a=a+2;
        printf("\n");
    }
    return 0;
}