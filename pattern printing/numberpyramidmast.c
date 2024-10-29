#include<stdio.h>
int main(){
    int n;
    printf("enter the number row: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i;j>1;j--){
            printf("%d",j-1);
            
        }
        printf("\n");
    }
}