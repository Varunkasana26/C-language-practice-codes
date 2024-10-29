#include<stdio.h>
#include<string.h>
int main(){
    char str[]="thapar university";
    //char* ptr = &str[0];
    // printf("%p\n",&str[0]);
    // printf("%p",&str);
    char* ptr = str;//ptr now points to str[0]
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}