/*Create a structure to specify data on students with
these attributes: Roll number, Name , Department , course ,
year of joining. Create 2 structure variables. Now, create a
function to check if two students have the same department 
Pass the two trucutre variable as input to this function.*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct student{
        int rno;
        char name[20];
        char dept[20];
        char course[20];
        int yearofjoining;
}s1,s2;
void check(char* a,char* b){
    int value = strcmp(a,b);
    if(value == 0)printf("In the same department");
    else printf("Not in same department");
}
int main(){
    
    strcpy(s1.name,"Varun");
    strcpy(s1.dept,"Computer science");
    strcpy(s1.course,"CSE");
    s1.rno=1024030185;
    s1.yearofjoining=2024;

    strcpy(s2.name,"Sonal");
    strcpy(s2.dept,"Computer science");
    strcpy(s2.course,"COE");
    s1.rno=1022030185;
    s1.yearofjoining=2022;
    check(s1.dept,s2.dept);
    return 0;
}
