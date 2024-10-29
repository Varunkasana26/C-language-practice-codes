/*Create a structure type'Person' with name, salary and age
as its attributes. Declare and initialize 2 variables for this
Prit the name of first person and age of the other.*/
#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        float salary;
        int age;
    }a,b,c;

    strcpy(a.name,"Raj");
    a.salary=150000;
    a.age = 32;
    printf("%s\n",a.name);

    strcpy(b.name,"Ram");
    b.salary=120000;
    b.age = 28;
    printf("%d\n",b.age);
    return 0;
}