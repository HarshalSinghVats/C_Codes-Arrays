#include<stdio.h>
#include<limits.h>
int main()
{
    int r,c;
    printf("Enter rows and columns of matrix : ");
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
    int max=INT_MIN;
    int index_r,index_c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]>max)  
            {
                max=arr[i][j];
                index_r=i;
                index_c=j;
            }        
        }
    }
    printf("Maximum element is %d and its index is (%d,%d)",max,index_r,index_c);
    return 0;
}