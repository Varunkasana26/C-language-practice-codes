#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("Enter first number :");
    scanf("%d",&n1);
    printf("Enter first number :\n");
    scanf("%d",&n2);
temp=n1;
n1 = n2;
n2=temp;
printf("%d\n",n1);
printf("%d",n2);
//another method without third variable
    int a1,a2;
    printf("enter number 1:");
    scanf("%d",&a1);
    printf("enter number 2:");
    scanf("%d",&a2);
    a1 = a1 + a2;
    a2 = a1 - a2;
    a1 = a1 - a2;
    printf("%d %d",a1,a2);
    return 0;
}