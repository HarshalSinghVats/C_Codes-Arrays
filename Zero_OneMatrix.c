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
            printf("Enter element (0 and 1 only) : ");
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
    int sub=0,row=0;
    for(int i=0;i<r;i++)
    {
        int count=0;
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==1)    count++;
        }
        if(sub<count){
            sub=count;
            row=i;
        }
    }
    printf("Row with maximum 1's is %d with  %d  1's.",row,sub);
    return 0;
}