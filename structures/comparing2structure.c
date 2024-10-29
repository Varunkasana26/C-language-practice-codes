/*Create a structure 'date' that contains three members
namely date,month and year. Create 2 strucutre variables
with different dates and now compare the two. If the dates
are equal then display message as "Equal otherwise "unequal""*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
    int date;
    int month;
    int year;
}date;
date a,b,c;
a.date = 26;
a.month = 04;
a.year = 2006;

b.date = 29;
b.month = 10;
b.year = 2024;

a=c;
bool flag = true;
if(a.date!=c.date) flag = false;
if(a.month!=c.month) flag = false;
if(a.year!=c.year) flag = false;

if(flag==true)printf("The dates are same");
else printf("The dates are different");
// bool flag = true;
// if(a.date!=b.date) flag = false;
// if(a.month!=b.month) flag = false;
// if(a.year!=b.year) flag = false;

// if(flag==true)printf("The dates are same");
// else printf("The dates are different");
    return 0;
}