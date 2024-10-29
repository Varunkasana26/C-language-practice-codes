/*Create a structure type 'book' with name, price and number
of pages as its attributes*/
#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noOfpages;
    }a,b,c;

    strcpy(a.name,"phy");
    a.noOfpages=100;
    a.price=150;
    printf("%d\n",a.noOfpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    return 0;
}