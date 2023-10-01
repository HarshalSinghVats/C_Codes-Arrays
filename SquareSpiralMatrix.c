//given a positive integer n, generate a n x n matrix filled with elements from 1 to n^2 in spiral order...
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int arr[n][n];
    int minr=0,maxr=n-1,minc=0,maxc=n-1;
    int count=1,tnum=n*n;
    printf("\n");
    while(count<=tnum){
        for(int i=minc;i<=maxc;i++){
            arr[minr][i]=count;
            count++;
        }
        if(count>tnum) break;
        minr++;
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc]=count;
            count++;
        }
        if(count>tnum) break;
        maxc--;
        for(int i=maxc;i>=minc;i--){
            arr[maxr][i]=count;
            count++;
        }
        if(count>tnum) break;
        maxr--;
        for(int i=maxr;i>=minr;i--){
            arr[i][minc]=count;
            count++;
        }
        if(count>tnum) break;
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)    printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}