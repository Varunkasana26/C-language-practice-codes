#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf(" ");
        }
        for(int x=1;x<=i;x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}