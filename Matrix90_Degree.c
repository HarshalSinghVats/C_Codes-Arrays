//rotate matrix 90 degree clockwise...
//wap to change a n x n matrix to it's transpose...
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows for square matrix : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nBefore rotation :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    int temp;
    //for transpose... 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;                     
        }
    }
    //for 90 degree clockwise...
    for(int i=0;i<n;i++)
    {
        int j=0,k=n-1;
        while(j<k){
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("After Rotation :\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}