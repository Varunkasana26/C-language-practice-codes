#include<stdio.h>
#include<string.h>
typedef struct book{
        char name[50];
        float price;
        int noOfpages;
    }VA;

    
int main(){
    // int x;
    // realNumber y=23.566;
    // printf("%f",y);
    VA a;
    strcpy(a.name,"phy");
    a.noOfpages=100;
    a.price=150;
    printf("%d\n",a.noOfpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    return 0;
}