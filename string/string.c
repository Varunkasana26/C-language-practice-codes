#include<stdio.h>
#include<string.h>
int main(){
    //char str[]="Hello world ";
    // str[1]=98;
    // int i=0;
    // while(str[i]!='\0'){
    //     printf("%c",str[i]);
    //     i++;
    // }
    // int i=0;
    // while(arr[i]!='\0'){
    //     printf("%c",arr[i]);
    //     i++;
    // }
    //printf("%s",str);
    // puts(str);
    // return 0;
    char str[40];
    scanf("%[^\n]s",str);
    printf("your input is %s",str);
}