#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("enter row number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            a++;
            printf("%d ",a); 
            a++;
        }
        
        printf("\n");
    }
    return 0;
}