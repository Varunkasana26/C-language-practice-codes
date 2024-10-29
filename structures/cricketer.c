/*A record contains name of cricketer, his age, number of test
matches that he has played and the average runs that her has scored
in each test match. Create an array of structure to hold records of 20 
such cricketer and then write a program to read these records*/
#include<stdio.h>
#include<string.h>
typedef struct cricketer{
    char name[20];
    int age;
    int noOfmatches;
    float averageruns;
}Cricketer;
int main(){
    Cricketer arr[20];
    for(int i=0;i<20;i++){
        
        scanf("%s",arr[i].name);
        
        scanf("%d",&arr[i].age);
        
        scanf("%d",&arr[i].noOfmatches);
        
        scanf("%f",&arr[i].averageruns);
        
    }
    for(int i=0;i<20;i++){
        
        printf("Name of the player: %s\n",arr[i].name);
        
        printf("Age of the player: %d\n",arr[i].age);
        
        printf("Number of matches played: %d\n",arr[i].noOfmatches);
        
        printf("Average runs made: %f\n",arr[i].averageruns);
        printf("\n");
    }
    return 0;
}