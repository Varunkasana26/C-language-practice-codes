#include<stdio.h>
int main(){
    int arr[3][3],min,max,minr=0,minc=0,maxr=0,maxc=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter number %d %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matirce is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                maxr=i+1;
                maxc=j+1;
            }
        }
    }
    min=arr[0][0];
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            if(min>arr[a][b]){
                min = arr[a][b];
                minr=a+1;
                minc=b+1;
            }
        }
    }
    printf("maximum value in matrice is %d at %d,%d\n",max,maxr,maxc);
    printf("maximum value in matrice is %d at %d,%d",min,minr,minc);
    return 0;
}