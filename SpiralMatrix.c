//given an n x m matrix, print all the elements of the matrix in spiral order...
/*
1 2 3
4 5 6
7 8 9

spiral:: 1 2 3 6 9 8 7 4 5
*/
#include<stdio.h>
int main(){
    int r,c,minr=0,minc=0,maxr=0,maxc=0;
    printf("Enter rows and columns of matrix : ");
    scanf("%d %d",&r,&c);
    maxr=r-1;
    maxc=c-1;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)    printf("%d ",arr[i][j]);
        printf("\n");
    }
    int count=0,tnum=r*c;
    printf("\n");
    while(count<tnum){
        for(int i=minc;i<=maxc;i++){
            printf("%d ",arr[minr][i]);
            count++;
        }
        if(count==tnum) break;
        minr++;
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        if(count==tnum) break;
        maxc--;
        for(int i=maxc;i>=minc;i--){
            printf("%d ",arr[maxr][i]);
            count++;
        }
        if(count==tnum) break;
        maxr--;
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        if(count==tnum) break;
        minc++;
    }
    return 0;
}