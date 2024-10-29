#include<stdio.h>
int main(){
    int arr[3][4] = {{1,0,0,01},{1,1,1,1},{1,0,0,1}},maxr=0;
    int maxcount=0;
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxr=i;;
        }
        printf("\n");
    }
    printf("%d %d",maxcount,maxr);
    return 0;
}