#include<stdio.h>
int main(){
    int n,a=1;
    printf("height of table: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("*");
        }
        for(int j=1;j<a;j++){
            printf(" ");
        }
        a=a+2;
        for(int j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}