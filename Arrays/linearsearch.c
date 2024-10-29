#include<stdio.h>
int main(){
    int n,arr[5]={1,5,8,6,3};
    printf("enter number to search: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(arr[i]==n)printf("%d",i);
        else printf("data not available");
    }
    return 0;
}