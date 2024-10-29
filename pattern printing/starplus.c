#include<stdio.h>
int main(){
    int n;
    printf("star height: ");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n/2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    if(n%2==0){
        for(int i=1;i<=n+1;i++){
        printf("*");
    }
    } else {for(int i=1;i<=n;i++){
        printf("*");}
    }
    printf("\n");
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n/2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}