#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter number of row: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}