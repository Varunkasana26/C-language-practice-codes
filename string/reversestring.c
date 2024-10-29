#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter a string");
    gets(str);
    puts("the reverse is :");
    //size
    // int size=0;
    // int k=0;
    // while(str[k]!='\0'){
    //     size++;
    //     k++;
    // }
    int x=strlen(str);
    printf("%d",x);
    // for(int i=0, j=size-1;i<=j;i++,j--){
    //     char temp = str[i];
    //     str[i]=str[j];
    //     str[j]= temp;
    // }
    
    return 0;
}