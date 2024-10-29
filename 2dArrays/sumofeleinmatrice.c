#include<stdio.h>
int main(){
    int arr[3][3],sum=0,n,m;
    printf("enter number of rows:");
    scanf("%d",&n);
    printf("enter number of columns:");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter number %d %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given matrice is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of all elements is %d",sum);
}