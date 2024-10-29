#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    puts("enter string :");
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]<=122 && a[i]>=97)
            a[i]=a[i]-32;
        else 
            a[i]=a[i]+32;
    }

    printf("%s", a);
    return 0;
}