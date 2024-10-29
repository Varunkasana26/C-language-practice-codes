#include<stdio.h>
int factorial(int x){
    int f=1;
        for(int i=1;i<=x;i++){
            f=f*i;
        }
        return f;
}
int main(){
    int n,npr,r;
    printf("enter the number to find permutation,n=");
    scanf("%d",&n);
    printf("enter the number to find permutation,r=");
    scanf("%d",&r);
    npr = factorial(n)/factorial(n-r);
    printf("Answer is %d",npr);
}