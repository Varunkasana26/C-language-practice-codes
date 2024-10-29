/*Typedef && the multiple pointer declaration problem*/
#include<stdio.h>
typedef int* pointer;
int main(){
    int x=3,y=5;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}