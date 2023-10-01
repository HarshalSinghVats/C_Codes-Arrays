#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter rows and columns in matrix : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    int maxSum=0,row,subSum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            maxSum+=arr[i][j];
        }
        if(subSum<maxSum)   
        {
            subSum=maxSum;
            row=i;
            maxSum=0;
        }
    }
    printf("Row with maximum sum is %d and the sum is %d",row,subSum);
    return 0;
}