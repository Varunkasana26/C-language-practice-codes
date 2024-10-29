#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length of triangle: ");
    scanf("%d",&l);
    printf("Enter the breath of rectangle: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}