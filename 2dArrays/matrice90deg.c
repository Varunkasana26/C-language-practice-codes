#include<stdio.h>
int main(){
    int a,b;
    printf("enter number of rows:");
    scanf("%d",&a);
    printf("enter number of column:");
    scanf("%d",&b);
    int arr[a][b];
    printf("enter matrice:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //printf("transpose:\n");
    for(int i=0;i<a;i++){
        for(int j=i;j<b;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
        }
    }
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<b;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("Rotation\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b/2;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[i][b-1-j];
            arr[i][b-1-j]= temp;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}