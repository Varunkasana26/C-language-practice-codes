#include <stdio.h>
int main()
{
    int marks[5],i;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the marks of student %d:-", i + 1);
        scanf("%d", &marks[i]);
    }
    for(i=0;i<=4;i++){
    if(marks[i]<35){
                printf("roll number of student with less then 35 marks are %d\n",i+1);
            }
    }
}