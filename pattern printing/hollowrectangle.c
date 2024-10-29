#include<stdio.h>
int main(){
    int l,b;
    printf("enter l:");
    scanf("%d",&l);
    printf("enter b:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
           if(i==b||j==1||i==1||j==l )printf("*");
           else printf(" ");
        }
        printf("\n");
    }
    return 0;
}