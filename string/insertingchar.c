#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="thapar";//2nd index pe 'a'
    printf("%s",str);
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    printf("%s",str);
    return 0;
}