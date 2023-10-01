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
    printf("\nBefore transpose : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    int temp;
    // for transpose... 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;                     
        }
    }
    //printing transpose...
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}